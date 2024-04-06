#include "test_main.h"

START_TEST(floor_1) {
  double number = 15;
  long double answer = s21_floor(number);
  long double orig = floorl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(floor_2) {
  double number = 21.57;
  long double answer = s21_floor(number);
  long double orig = floorl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(floor_3) {
  double number = -21.57;
  long double answer = s21_floor(number);
  long double orig = floorl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(floor_4) {
  double number = 321.000004;
  long double answer = s21_floor(number);
  long double orig = floorl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(floor_5) {
  double number = 0;
  long double answer = s21_floor(number);
  long double orig = floorl(number);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(floor_6) {
  float number = INFINITY;
  long double answer = s21_floor(number);
  long double orig = floorl(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(floor_7) {
  float number = -INFINITY;
  long double answer = s21_floor(number);
  long double orig = floorl(number);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(floor_8) {
  float number = NAN;
  long double answer = s21_floor(number);
  long double orig = floorl(number);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(floor_9) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_floor(number);
    long double orig = floorl(number);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

Suite *floor_suite(void) {
  Suite *s = suite_create("FLOOR");
  TCase *tc_floor = tcase_create("FLOOR");
  tcase_add_test(tc_floor, floor_1);
  tcase_add_test(tc_floor, floor_2);
  tcase_add_test(tc_floor, floor_3);
  tcase_add_test(tc_floor, floor_4);
  tcase_add_test(tc_floor, floor_5);
  tcase_add_test(tc_floor, floor_6);
  tcase_add_test(tc_floor, floor_7);
  tcase_add_test(tc_floor, floor_8);
  tcase_add_test(tc_floor, floor_9);
  suite_add_tcase(s, tc_floor);
  return s;
}