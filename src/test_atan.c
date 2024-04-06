#include "test_main.h"

START_TEST(atan_1) {
  double number = 0;
  long double answer = s21_atan(number);
  long double orig = atanl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(atan_2) {
  double number = 0;
  for (double i = number; i < 1.0; i = i + 0.1) {
    long double answer = s21_atan(i);
    long double orig = atanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_3) {
  double number = 0;
  for (double i = number; i < 10; i = i + 1) {
    long double answer = s21_atan(i);
    long double orig = atanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_4) {
  int number = INT_MAX;
  long double answer = s21_atan(number);
  long double orig = atanl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(atan_5) {
  double number = 1;
  for (double i = number; i < 1.0005; i = i + 0.00001) {
    long double answer = s21_atan(i);
    long double orig = atanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_6) {
  double number = 1;
  for (double i = number; i > 0.9992; i = i - 0.00001) {
    long double answer = s21_atan(i);
    long double orig = atanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_7) {
  double number = 0;
  for (double i = number; i > -1.0; i = i - 0.1) {
    long double answer = s21_atan(i);
    long double orig = atanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_8) {
  double number = 0;
  for (double i = number; i > -10; i = i - 1) {
    long double answer = s21_atan(i);
    long double orig = atanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_9) {
  int number = -INT_MAX;
  long double answer = s21_atan(number);
  long double orig = atanl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(atan_10) {
  double number = -1;
  for (double i = number; i > -1.0005; i = i - 0.00001) {
    long double answer = s21_atan(i);
    long double orig = atanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_11) {
  double number = -1;
  for (double i = number; i < -0.9992; i = i + 0.00001) {
    long double answer = s21_atan(i);
    long double orig = atanl(i);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_12) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_atan(number);
    long double orig = atanl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(atan_13) {
  float number = INFINITY;
  long double answer = s21_atan(number);
  long double orig = atanl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(atan_14) {
  float number = -INFINITY;
  long double answer = s21_atan(number);
  long double orig = atanl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(atan_15) {
  float number = NAN;
  long double answer = s21_atan(number);
  long double orig = atanl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

Suite *atan_suite(void) {
  Suite *s = suite_create("ATAN");
  TCase *tc_atan = tcase_create("ATAN");
  tcase_add_test(tc_atan, atan_1);
  tcase_add_test(tc_atan, atan_2);
  tcase_add_test(tc_atan, atan_3);
  tcase_add_test(tc_atan, atan_4);
  tcase_add_test(tc_atan, atan_5);
  tcase_add_test(tc_atan, atan_6);
  tcase_add_test(tc_atan, atan_7);
  tcase_add_test(tc_atan, atan_8);
  tcase_add_test(tc_atan, atan_9);
  tcase_add_test(tc_atan, atan_10);
  tcase_add_test(tc_atan, atan_11);
  tcase_add_test(tc_atan, atan_12);
  tcase_add_test(tc_atan, atan_13);
  tcase_add_test(tc_atan, atan_14);
  tcase_add_test(tc_atan, atan_15);
  suite_add_tcase(s, tc_atan);
  return s;
}