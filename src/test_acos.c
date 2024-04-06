#include "test_main.h"

START_TEST(acos_1) {
  double number = 0;
  long double answer = s21_acos(number);
  long double orig = acosl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-16);
}

START_TEST(acos_2) {
  double number = 1;
  long double answer = s21_acos(number);
  long double orig = acosl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-16);
}

START_TEST(acos_3) {
  double number = -1;
  long double answer = s21_acos(number);
  long double orig = acosl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(acos_4) {
  double number = 2;
  long double answer = s21_acos(number);
  long double orig = acosl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(acos_5) {
  double number = -2;
  long double answer = s21_acos(number);
  long double orig = acosl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(acos_6) {
  double number = 0;
  for (double i = number; i < 0.5; i = i + 0.001) {
    long double answer = s21_acos(i);
    long double orig = acosl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(acos_7) {
  double number = 0.5;
  for (double i = number; i < 1; i = i + 0.001) {
    long double answer = s21_acos(i);
    long double orig = acosl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(acos_8) {
  double number = 0;
  for (double i = number; i > -0.5; i = i - 0.001) {
    long double answer = s21_acos(i);
    long double orig = acosl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(acos_9) {
  double number = -0.5;
  for (double i = number; i > -1; i = i - 0.001) {
    long double answer = s21_acos(i);
    long double orig = acosl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(acos_10) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (2.0) - 1.0;
    long double answer = s21_acos(number);
    long double orig = acosl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(acos_11) {
  float number = INFINITY;
  long double answer = s21_acos(number);
  long double orig = acosl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(acos_12) {
  float number = -INFINITY;
  long double answer = s21_acos(number);
  long double orig = acosl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(acos_13) {
  float number = NAN;
  long double answer = s21_acos(number);
  long double orig = acosl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

Suite *acos_suite(void) {
  Suite *s = suite_create("ACOS");
  TCase *tc_acos = tcase_create("ACOS");
  tcase_add_test(tc_acos, acos_1);
  tcase_add_test(tc_acos, acos_2);
  tcase_add_test(tc_acos, acos_3);
  tcase_add_test(tc_acos, acos_4);
  tcase_add_test(tc_acos, acos_5);
  tcase_add_test(tc_acos, acos_6);
  tcase_add_test(tc_acos, acos_7);
  tcase_add_test(tc_acos, acos_8);
  tcase_add_test(tc_acos, acos_9);
  tcase_add_test(tc_acos, acos_10);
  tcase_add_test(tc_acos, acos_11);
  tcase_add_test(tc_acos, acos_12);
  tcase_add_test(tc_acos, acos_13);
  suite_add_tcase(s, tc_acos);
  return s;
}