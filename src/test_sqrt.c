#include "test_main.h"

START_TEST(sqrt_1) {
  double number = -1;
  long double answer = s21_sqrt(number);
  long double orig = sqrtl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(sqrt_2) {
  int number = 0;
  long double answer = s21_sqrt(number);
  long double orig = sqrtl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(sqrt_3) {
  int number = 1;
  long double answer = s21_sqrt(number);
  long double orig = sqrtl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(sqrt_4) {
  int number = INT_MAX;
  long double answer = s21_sqrt(number);
  long double orig = sqrtl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(sqrt_5) {
  int number = INT_MIN;
  long double answer = s21_sqrt(number);
  long double orig = sqrtl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(sqrt_6) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0);
    long double answer = s21_sqrt(number);
    long double orig = sqrtl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sqrt_7) {
  double number = 0;
  for (double i = number; i < 0.1; i = i + 0.00001) {
    long double answer = s21_sqrt(i);
    long double orig = sqrtl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sqrt_8) {
  double number = 0.5;
  for (double i = number; i < 0.6; i = i + 0.00001) {
    long double answer = s21_sqrt(i);
    long double orig = sqrtl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sqrt_9) {
  double number = 1;
  for (double i = number; i < 1.1; i = i + 0.00001) {
    long double answer = s21_sqrt(i);
    long double orig = sqrtl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sqrt_10) {
  double number = 1.5;
  for (double i = number; i < 1.6; i = i + 0.00001) {
    long double answer = s21_sqrt(i);
    long double orig = sqrtl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sqrt_11) {
  float number = INFINITY;
  long double answer = s21_sqrt(number);
  long double orig = sqrtl(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(sqrt_12) {
  float number = -INFINITY;
  long double answer = s21_sqrt(number);
  long double orig = sqrtl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(sqrt_13) {
  float number = NAN;
  long double answer = s21_sqrt(number);
  long double orig = sqrtl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

Suite *sqrt_suite(void) {
  Suite *s = suite_create("SQRT");
  TCase *tc_sqrt = tcase_create("SQRT");
  tcase_add_test(tc_sqrt, sqrt_1);
  tcase_add_test(tc_sqrt, sqrt_2);
  tcase_add_test(tc_sqrt, sqrt_3);
  tcase_add_test(tc_sqrt, sqrt_4);
  tcase_add_test(tc_sqrt, sqrt_5);
  tcase_add_test(tc_sqrt, sqrt_6);
  tcase_add_test(tc_sqrt, sqrt_7);
  tcase_add_test(tc_sqrt, sqrt_8);
  tcase_add_test(tc_sqrt, sqrt_9);
  tcase_add_test(tc_sqrt, sqrt_10);
  tcase_add_test(tc_sqrt, sqrt_11);
  tcase_add_test(tc_sqrt, sqrt_12);
  tcase_add_test(tc_sqrt, sqrt_13);
  suite_add_tcase(s, tc_sqrt);
  return s;
}