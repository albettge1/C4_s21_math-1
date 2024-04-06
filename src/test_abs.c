#include "test_main.h"

START_TEST(abs_1) {
  int number = -1;
  int answer = s21_abs(number);
  int orig = abs(number);
  ck_assert_int_eq(orig, answer);
}

START_TEST(abs_2) {
  int number = 0;
  int answer = s21_abs(number);
  int orig = abs(number);
  ck_assert_int_eq(orig, answer);
}

START_TEST(abs_3) {
  int number = 1;
  int answer = s21_abs(number);
  int orig = abs(number);
  ck_assert_int_eq(orig, answer);
}

START_TEST(abs_4) {
  int number = INT_MAX;
  int answer = s21_abs(number);
  int orig = abs(number);
  ck_assert_int_eq(orig, answer);
}

START_TEST(abs_5) {
  int number = INT_MIN;
  int answer = s21_abs(number);
  int orig = abs(number);
  ck_assert_int_eq(orig, answer);
}

Suite *abs_suite(void) {
  Suite *s = suite_create("\n ABS");
  TCase *tc_abs = tcase_create("ABS");
  tcase_add_test(tc_abs, abs_1);
  tcase_add_test(tc_abs, abs_2);
  tcase_add_test(tc_abs, abs_3);
  tcase_add_test(tc_abs, abs_4);
  tcase_add_test(tc_abs, abs_5);
  suite_add_tcase(s, tc_abs);
  return s;
}