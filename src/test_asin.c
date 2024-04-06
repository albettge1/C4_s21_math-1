#include "test_main.h"

START_TEST(asin_1) {
  double number = 0;
  long double answer = s21_asin(number);
  long double orig = asinl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-16);
}

START_TEST(asin_2) {
  double number = 1;
  long double answer = s21_asin(number);
  long double orig = asinl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-16);
}

START_TEST(asin_3) {
  double number = -1;
  long double answer = s21_asin(number);
  long double orig = asinl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-16);
}

START_TEST(asin_4) {
  double number = 2;
  long double answer = s21_asin(number);
  long double orig = asinl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(asin_5) {
  double number = -2;
  long double answer = s21_asin(number);
  long double orig = asinl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(asin_6) {
  double number = 0;
  for (double i = number; i < 0.5; i = i + 0.001) {
    long double answer = s21_asin(i);
    long double orig = asinl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(asin_7) {
  double number = 0.5;
  for (double i = number; i < 1; i = i + 0.001) {
    long double answer = s21_asin(i);
    long double orig = asinl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(asin_8) {
  double number = 0;
  for (double i = number; i > -0.5; i = i - 0.001) {
    long double answer = s21_asin(i);
    long double orig = asinl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(asin_9) {
  double number = -0.5;
  for (double i = number; i > -1; i = i - 0.001) {
    long double answer = s21_asin(i);
    long double orig = asinl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(asin_10) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (2.0) - 1.0;
    long double answer = s21_asin(number);
    long double orig = asinl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(asin_11) {
  float number = INFINITY;
  long double answer = s21_asin(number);
  long double orig = asinl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(asin_12) {
  float number = -INFINITY;
  long double answer = s21_asin(number);
  long double orig = asinl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(asin_13) {
  float number = NAN;
  long double answer = s21_asin(number);
  long double orig = asinl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

Suite *asin_suite(void) {
  Suite *s = suite_create("ASIN");
  TCase *tc_asin = tcase_create("ASIN");
  tcase_add_test(tc_asin, asin_1);
  tcase_add_test(tc_asin, asin_2);
  tcase_add_test(tc_asin, asin_3);
  tcase_add_test(tc_asin, asin_4);
  tcase_add_test(tc_asin, asin_5);
  tcase_add_test(tc_asin, asin_6);
  tcase_add_test(tc_asin, asin_7);
  tcase_add_test(tc_asin, asin_8);
  tcase_add_test(tc_asin, asin_9);
  tcase_add_test(tc_asin, asin_10);
  tcase_add_test(tc_asin, asin_11);
  tcase_add_test(tc_asin, asin_12);
  tcase_add_test(tc_asin, asin_13);
  suite_add_tcase(s, tc_asin);
  return s;
}