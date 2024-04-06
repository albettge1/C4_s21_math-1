#include "test_main.h"

START_TEST(log_1) {
  double number = 0;
  long double answer = s21_log(number);
  long double orig = logl(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(log_2) {
  double number = 0.00000001;
  for (double i = number; i < 1.0; i = i + 0.1) {
    long double answer = s21_log(i);
    long double orig = logl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(log_3) {
  double number = 0.00000001;
  for (double i = number; i < 10; i = i + 1) {
    long double answer = s21_log(i);
    long double orig = logl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(log_4) {
  int number = INT_MAX;
  long double answer = s21_log(number);
  long double orig = logl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(log_5) {
  double number = 1;
  for (double i = number; i < 1.3; i = i + 0.00001) {
    long double answer = s21_log(i);
    long double orig = logl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(log_6) {
  double number = 1.8;
  for (double i = number; i < 2.1; i = i + 0.00001) {
    long double answer = s21_log(i);
    long double orig = logl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(log_7) {
  double number = 1;
  for (double i = number; i > 0.6; i = i - 0.00001) {
    long double answer = s21_log(i);
    long double orig = logl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(log_8) {
  double number = 0.1;
  for (double i = number; i > 0.00000000000001; i = i - 0.00001) {
    long double answer = s21_log(i);
    long double orig = logl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(log_9) {
  double number = -0.00000000001;
  long double answer = s21_log(number);
  long double orig = logl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(log_10) {
  double number = -1.0;
  long double answer = s21_log(number);
  long double orig = logl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(log_11) {
  int number = -INT_MAX;
  long double answer = s21_log(number);
  long double orig = logl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(log_12) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0);
    long double answer = s21_log(number);
    long double orig = logl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(log_13) {
  float number = INFINITY;
  long double answer = s21_log(number);
  long double orig = logl(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(log_14) {
  float number = -INFINITY;
  long double answer = s21_log(number);
  long double orig = logl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(log_15) {
  float number = NAN;
  long double answer = s21_log(number);
  long double orig = logl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

Suite *log_suite(void) {
  Suite *s = suite_create("LOG");
  TCase *tc_log = tcase_create("LOG");
  tcase_add_test(tc_log, log_1);
  tcase_add_test(tc_log, log_2);
  tcase_add_test(tc_log, log_3);
  tcase_add_test(tc_log, log_4);
  tcase_add_test(tc_log, log_5);
  tcase_add_test(tc_log, log_6);
  tcase_add_test(tc_log, log_7);
  tcase_add_test(tc_log, log_8);
  tcase_add_test(tc_log, log_9);
  tcase_add_test(tc_log, log_10);
  tcase_add_test(tc_log, log_11);
  tcase_add_test(tc_log, log_12);
  tcase_add_test(tc_log, log_13);
  tcase_add_test(tc_log, log_14);
  tcase_add_test(tc_log, log_15);
  suite_add_tcase(s, tc_log);
  return s;
}