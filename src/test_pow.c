#include "test_main.h"

START_TEST(pow_1) {
  double number = 0.0;
  double numbertwo = 0.0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_2) {
  double number = 14.3412;
  double numbertwo = 2;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_3) {
  double number = -235.422223;
  double numbertwo = 5.5;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_nan(orig);
  ck_assert_ldouble_nan(answer);
}

START_TEST(pow_3_2) {
  double number = -2.422223;
  double numbertwo = 6;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_4) {
  double number = 20;
  double numbertwo = 20;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_5) {
  double number = 32;
  double numbertwo = -2;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_6) {
  double number = 0;
  double exp = 0;
  for (double i = number; i < 1; i = i + 0.0001) {
    long double answer = s21_pow(i, exp);
    long double orig = powl(i, exp);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(pow_7) {
  double number = 0;
  double exp = 1;
  for (double i = number; i < 1; i = i + 0.0001) {
    long double answer = s21_pow(i, exp);
    long double orig = powl(i, exp);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(pow_8) {
  double number = 0;
  double exp = 2;
  for (double i = number; i < 1; i = i + 0.0001) {
    long double answer = s21_pow(i, exp);
    long double orig = powl(i, exp);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(pow_9) {
  double number = 0;
  double exp = 3;
  for (double i = number; i < 1; i = i + 0.0001) {
    long double answer = s21_pow(i, exp);
    long double orig = powl(i, exp);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(pow_10) {
  double number = 0;
  double exp = 4;
  for (double i = number; i < 1; i = i + 0.0001) {
    long double answer = s21_pow(i, exp);
    long double orig = powl(i, exp);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(pow_11) {
  double number = 0;
  double exp = 5;
  for (double i = number; i < 1; i = i + 0.0001) {
    long double answer = s21_pow(i, exp);
    long double orig = powl(i, exp);
    ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
  }
}

START_TEST(pow_12) {
  double number = 0.0;
  double numbertwo = 4;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_13) {
  double number = 0.0;
  double numbertwo = -4;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(pow_14) {
  double number = 0.0;
  double numbertwo = 5;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_15) {
  double number = 0.0;
  double numbertwo = -5;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(pow_16) {
  double number = 0.0;
  double numbertwo = NAN;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(pow_17) {
  double number = 0.0;
  double numbertwo = -NAN;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(pow_18) {
  double number = 0.0;
  double numbertwo = INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_19) {
  double number = 0.0;
  double numbertwo = -INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(pow_20) {
  double number = -1;
  double numbertwo = INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_21) {
  double number = -1;
  double numbertwo = -INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_22) {
  double number = 1;
  double numbertwo = INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_23) {
  double number = 1;
  double numbertwo = -INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_24) {
  double number = 1;
  double numbertwo = NAN;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_25) {
  double number = 1;
  double numbertwo = 0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_26) {
  double number = 1;
  double numbertwo = 4;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_27) {
  double number = 1;
  double numbertwo = 5;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_28) {
  double number = NAN;
  double numbertwo = 0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_29) {
  double number = INFINITY;
  double numbertwo = 0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_30) {
  double number = -INFINITY;
  double numbertwo = 0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_31) {
  double number = 4;
  double numbertwo = 0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_32) {
  double number = 5;
  double numbertwo = 0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_33) {
  double number = INFINITY;
  double numbertwo = 5;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(pow_34) {
  double number = -INFINITY;
  double numbertwo = 5;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(pow_35) {
  double number = INFINITY;
  double numbertwo = -5;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_36) {
  double number = -INFINITY;
  double numbertwo = -5;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_37) {
  double number = INFINITY;
  double numbertwo = 0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_38) {
  double number = -INFINITY;
  double numbertwo = 0;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_39) {
  double number = INFINITY;
  double numbertwo = 4;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(pow_40) {
  double number = -INFINITY;
  double numbertwo = 4;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(pow_41) {
  double number = INFINITY;
  double numbertwo = -4;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_42) {
  double number = -INFINITY;
  double numbertwo = -4;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_43) {
  double number = INFINITY;
  double numbertwo = INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_infinite(orig);
  ck_assert_ldouble_infinite(answer);
}

START_TEST(pow_44) {
  double number = INFINITY;
  double numbertwo = -INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_45) {
  double number = -INFINITY;
  double numbertwo = -INFINITY;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(pow_46) {
  double number = INFINITY;
  double numbertwo = NAN;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(pow_47) {
  double number = -INFINITY;
  double numbertwo = NAN;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(pow_48) {
  double number = NAN;
  double numbertwo = NAN;
  long double answer = s21_pow(number, numbertwo);
  long double orig = powl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(pow_49) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (20.0) - 10.0;
    double exp = (double)rand() / RAND_MAX * (20.0) - 10.0;
    long double answer = s21_pow(number, exp);
    long double orig = pow(number, exp);
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

Suite *pow_suite(void) {
  Suite *s = suite_create("POW");
  TCase *tc_pow = tcase_create("POW");
  tcase_add_test(tc_pow, pow_1);
  tcase_add_test(tc_pow, pow_2);
  tcase_add_test(tc_pow, pow_3);
  tcase_add_test(tc_pow, pow_4);
  tcase_add_test(tc_pow, pow_5);
  tcase_add_test(tc_pow, pow_6);
  tcase_add_test(tc_pow, pow_7);
  tcase_add_test(tc_pow, pow_8);
  tcase_add_test(tc_pow, pow_9);
  tcase_add_test(tc_pow, pow_10);
  tcase_add_test(tc_pow, pow_11);
  tcase_add_test(tc_pow, pow_12);
  tcase_add_test(tc_pow, pow_13);
  tcase_add_test(tc_pow, pow_14);
  tcase_add_test(tc_pow, pow_15);
  tcase_add_test(tc_pow, pow_16);
  tcase_add_test(tc_pow, pow_17);
  tcase_add_test(tc_pow, pow_18);
  tcase_add_test(tc_pow, pow_19);
  tcase_add_test(tc_pow, pow_20);
  tcase_add_test(tc_pow, pow_21);
  tcase_add_test(tc_pow, pow_22);
  tcase_add_test(tc_pow, pow_23);
  tcase_add_test(tc_pow, pow_24);
  tcase_add_test(tc_pow, pow_25);
  tcase_add_test(tc_pow, pow_26);
  tcase_add_test(tc_pow, pow_27);
  tcase_add_test(tc_pow, pow_28);
  tcase_add_test(tc_pow, pow_29);
  tcase_add_test(tc_pow, pow_30);
  tcase_add_test(tc_pow, pow_31);
  tcase_add_test(tc_pow, pow_32);
  tcase_add_test(tc_pow, pow_33);
  tcase_add_test(tc_pow, pow_34);
  tcase_add_test(tc_pow, pow_35);
  tcase_add_test(tc_pow, pow_36);
  tcase_add_test(tc_pow, pow_37);
  tcase_add_test(tc_pow, pow_38);
  tcase_add_test(tc_pow, pow_39);
  tcase_add_test(tc_pow, pow_40);
  tcase_add_test(tc_pow, pow_41);
  tcase_add_test(tc_pow, pow_42);
  tcase_add_test(tc_pow, pow_43);
  tcase_add_test(tc_pow, pow_44);
  tcase_add_test(tc_pow, pow_45);
  tcase_add_test(tc_pow, pow_46);
  tcase_add_test(tc_pow, pow_47);
  tcase_add_test(tc_pow, pow_48);
  tcase_add_test(tc_pow, pow_49);
  tcase_add_test(tc_pow, pow_3_2);
  suite_add_tcase(s, tc_pow);
  return s;
}