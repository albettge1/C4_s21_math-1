#include "test_main.h"

START_TEST(tan_1) {
  double number = 0;
  for (double i = number; i < S21_PI / 2 - 0.0001; i = i + 0.0001) {
    long double answer = s21_tan(i);
    long double orig = tanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(tan_2) {
  double number = S21_PI / 2 + 0.0002;
  for (double i = number; i < 3 * S21_PI / 2 - 0.0001; i = i + 0.0001) {
    long double answer = s21_tan(i);
    long double orig = tanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(tan_3) {
  double number = 3 * S21_PI / 2 + 0.0002;
  for (double i = number; i < 5 * S21_PI / 2 - 0.0001; i = i + 0.0001) {
    long double answer = s21_tan(i);
    long double orig = tanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(tan_4) {
  double number = 0;
  for (double i = number; i > -S21_PI / 2 + 0.0001; i = i - 0.0001) {
    long double answer = s21_tan(i);
    long double orig = tanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(tan_5) {
  double number = -S21_PI / 2 - 0.0002;
  for (double i = number; i > -3 * S21_PI / 2 + 0.0001; i = i - 0.0001) {
    long double answer = s21_tan(i);
    long double orig = tanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(tan_6) {
  double number = -3 * S21_PI / 2 - 0.0002;
  for (double i = number; i > -5 * S21_PI / 2 + 0.0001; i = i - 0.0001) {
    long double answer = s21_tan(i);
    long double orig = tanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(tan_7) {
  for (double i = 0; i < 1000; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_tan(number);
    long double orig = tanl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(tan_8) {
  float number = INFINITY;
  long double answer = s21_tan(number);
  long double orig = tanl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(tan_9) {
  float number = -INFINITY;
  long double answer = s21_tan(number);
  long double orig = tanl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(tan_10) {
  float number = NAN;
  long double answer = s21_tan(number);
  long double orig = tanl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

Suite *tan_suite(void) {
  Suite *s = suite_create("TAN");
  TCase *tc_tan = tcase_create("TAN");
  tcase_add_test(tc_tan, tan_1);
  tcase_add_test(tc_tan, tan_2);
  tcase_add_test(tc_tan, tan_3);
  tcase_add_test(tc_tan, tan_4);
  tcase_add_test(tc_tan, tan_5);
  tcase_add_test(tc_tan, tan_6);
  tcase_add_test(tc_tan, tan_7);
  tcase_add_test(tc_tan, tan_8);
  tcase_add_test(tc_tan, tan_9);
  tcase_add_test(tc_tan, tan_10);
  suite_add_tcase(s, tc_tan);
  return s;
}