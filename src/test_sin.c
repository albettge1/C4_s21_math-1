#include "test_main.h"

START_TEST(sin_1) {
  double number = 0;
  for (double i = number; i <= 2 * S21_PI; i = i + 0.0001) {
    long double answer = s21_sin(i);
    long double orig = sinl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sin_2) {
  double number = 0;
  for (double i = number; i >= -2 * S21_PI; i = i - 0.0001) {
    long double answer = s21_sin(i);
    long double orig = sinl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sin_3) {
  double number = 2 * S21_PI;
  for (double i = number; i <= 4 * S21_PI; i = i + 0.0001) {
    long double answer = s21_sin(i);
    long double orig = sinl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sin_4) {
  double number = -2 * S21_PI;
  for (double i = number; i >= -4 * S21_PI; i = i - 0.0001) {
    long double answer = s21_sin(i);
    long double orig = sinl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sin_5) {
  for (double i = 0; i < 1000; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_sin(number);
    long double orig = sinl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(sin_6) {
  float number = INFINITY;
  long double answer = s21_sin(number);
  long double orig = sinl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(sin_7) {
  float number = -INFINITY;
  long double answer = s21_sin(number);
  long double orig = sinl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(sin_8) {
  float number = NAN;
  long double answer = s21_sin(number);
  long double orig = sinl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

Suite *sin_suite(void) {
  Suite *s = suite_create("SIN");
  TCase *tc_sin = tcase_create("SIN");
  tcase_add_test(tc_sin, sin_1);
  tcase_add_test(tc_sin, sin_2);
  tcase_add_test(tc_sin, sin_3);
  tcase_add_test(tc_sin, sin_4);
  tcase_add_test(tc_sin, sin_5);
  tcase_add_test(tc_sin, sin_6);
  tcase_add_test(tc_sin, sin_7);
  tcase_add_test(tc_sin, sin_8);
  suite_add_tcase(s, tc_sin);
  return s;
}