#include "test_main.h"

START_TEST(fabs_1) {
  double number = 1.0;
  long double answer = s21_fabs(number);
  long double orig = fabsl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fabs_2) {
  double number = 0.0;
  long double answer = s21_fabs(number);
  long double orig = fabsl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fabs_3) {
  double number = -0.0;
  long double answer = s21_fabs(number);
  long double orig = fabsl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fabs_4) {
  double number = 453.42;
  long double answer = s21_fabs(number);
  long double orig = fabsl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fabs_5) {
  double number = -953535.42;
  long double answer = s21_fabs(number);
  long double orig = fabsl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fabs_6) {
  float number = INFINITY;
  long double answer = s21_fabs(number);
  long double orig = fabsl(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(fabs_7) {
  float number = -INFINITY;
  long double answer = s21_fabs(number);
  long double orig = fabsl(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(fabs_8) {
  float number = NAN;
  long double answer = s21_fabs(number);
  long double orig = fabsl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fabs_9) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_fabs(number);
    long double orig = fabsl(number);
    if (orig == S21_INF || orig == -S21_INF) {
      ck_assert_ldouble_infinite(orig);
      ck_assert_ldouble_infinite(answer);
    } else if (orig != orig) {
      ck_assert_ldouble_nan(answer);
      ck_assert_ldouble_nan(orig);
    } else {
      ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
    }
  }
}

Suite *fabs_suite(void) {
  Suite *s = suite_create("FABS");
  TCase *tc_fabs = tcase_create("FABS");
  tcase_add_test(tc_fabs, fabs_1);
  tcase_add_test(tc_fabs, fabs_2);
  tcase_add_test(tc_fabs, fabs_3);
  tcase_add_test(tc_fabs, fabs_4);
  tcase_add_test(tc_fabs, fabs_5);
  tcase_add_test(tc_fabs, fabs_6);
  tcase_add_test(tc_fabs, fabs_7);
  tcase_add_test(tc_fabs, fabs_8);
  tcase_add_test(tc_fabs, fabs_9);
  suite_add_tcase(s, tc_fabs);
  return s;
}