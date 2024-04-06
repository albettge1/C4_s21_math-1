#include "test_main.h"

START_TEST(ceil_1) {
  double number = 15;
  long double answer = s21_ceil(number);
  long double orig = ceill(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(ceil_2) {
  double number = 21.57;
  long double answer = s21_ceil(number);
  long double orig = ceill(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(ceil_3) {
  double number = -21.57;
  long double answer = s21_ceil(number);
  long double orig = ceill(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(ceil_4) {
  double number = 321.000004;
  long double answer = s21_ceil(number);
  long double orig = ceill(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(ceil_5) {
  double number = 0;
  long double answer = s21_ceil(number);
  long double orig = ceil(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(ceil_6) {
  float number = INFINITY;
  long double answer = s21_ceil(number);
  long double orig = ceill(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(ceil_7) {
  float number = -INFINITY;
  long double answer = s21_ceil(number);
  long double orig = ceill(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(ceil_8) {
  float number = NAN;
  long double answer = s21_ceil(number);
  long double orig = ceill(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(ceil_9) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_ceil(number);
    long double orig = ceill(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

Suite *ceil_suite(void) {
  Suite *s = suite_create("CEIL");
  TCase *tc_ceil = tcase_create("CEIL");
  tcase_add_test(tc_ceil, ceil_1);
  tcase_add_test(tc_ceil, ceil_2);
  tcase_add_test(tc_ceil, ceil_3);
  tcase_add_test(tc_ceil, ceil_4);
  tcase_add_test(tc_ceil, ceil_5);
  tcase_add_test(tc_ceil, ceil_6);
  tcase_add_test(tc_ceil, ceil_7);
  tcase_add_test(tc_ceil, ceil_8);
  tcase_add_test(tc_ceil, ceil_9);
  suite_add_tcase(s, tc_ceil);
  return s;
}