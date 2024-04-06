#include "test_main.h"

START_TEST(exp_1) {
  double number = 21.53;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(exp_2) {
  double number = -21.53;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(exp_3) {
  double number = -0.53;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(exp_4) {
  double number = 1;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(exp_5) {
  double number = 0;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(exp_6) {
  double number = 2;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(exp_7) {
  double number = 2.3335112234;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(exp_8) {
  float number = INFINITY;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(exp_9) {
  float number = -INFINITY;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(exp_10) {
  float number = NAN;
  long double answer = s21_exp(number);
  long double orig = expl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(exp_11) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (10.0) - 5.0;
    long double answer = s21_exp(number);
    long double orig = expl(number);
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

Suite *exp_suite(void) {
  Suite *s = suite_create("EXP");
  TCase *tc_exp = tcase_create("EXP");
  tcase_add_test(tc_exp, exp_1);
  tcase_add_test(tc_exp, exp_2);
  tcase_add_test(tc_exp, exp_3);
  tcase_add_test(tc_exp, exp_4);
  tcase_add_test(tc_exp, exp_5);
  tcase_add_test(tc_exp, exp_6);
  tcase_add_test(tc_exp, exp_7);
  tcase_add_test(tc_exp, exp_8);
  tcase_add_test(tc_exp, exp_9);
  tcase_add_test(tc_exp, exp_10);
  tcase_add_test(tc_exp, exp_11);
  suite_add_tcase(s, tc_exp);
  return s;
}