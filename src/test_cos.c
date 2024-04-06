#include "test_main.h"

START_TEST(cos_1) {
  double number = 0;
  for (double i = number; i <= 2 * S21_PI; i = i + 0.0001) {
    long double answer = s21_cos(i);
    long double orig = cosl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(cos_2) {
  double number = 0;
  for (double i = number; i >= -2 * S21_PI; i = i - 0.0001) {
    long double answer = s21_cos(i);
    long double orig = cosl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(cos_3) {
  double number = 2 * S21_PI;
  for (double i = number; i <= 4 * S21_PI; i = i + 0.0001) {
    long double answer = s21_cos(i);
    long double orig = cosl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(cos_4) {
  double number = -2 * S21_PI;
  for (double i = number; i >= -4 * S21_PI; i = i - 0.0001) {
    long double answer = s21_cos(i);
    long double orig = cosl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(cos_5) {
  for (double i = 0; i < 1000; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_cos(number);
    long double orig = cosl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(cos_6) {
  float number = INFINITY;
  long double answer = s21_cos(number);
  long double orig = cosl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(cos_7) {
  float number = -INFINITY;
  long double answer = s21_cos(number);
  long double orig = cosl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(cos_8) {
  float number = NAN;
  long double answer = s21_cos(number);
  long double orig = cosl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

Suite *cos_suite(void) {
  Suite *s = suite_create("COS");
  TCase *tc_cos = tcase_create("COS");
  tcase_add_test(tc_cos, cos_1);
  tcase_add_test(tc_cos, cos_2);
  tcase_add_test(tc_cos, cos_3);
  tcase_add_test(tc_cos, cos_4);
  tcase_add_test(tc_cos, cos_5);
  tcase_add_test(tc_cos, cos_6);
  tcase_add_test(tc_cos, cos_7);
  tcase_add_test(tc_cos, cos_8);
  suite_add_tcase(s, tc_cos);
  return s;
}