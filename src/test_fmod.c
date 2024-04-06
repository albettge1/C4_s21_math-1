#include "test_main.h"

START_TEST(fmod_1) {
  double number = 0.0;
  double numbertwo = 0.0;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_2) {
  double number = 17.3412;
  double numbertwo = 3;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_3) {
  double number = -235.422223;
  double numbertwo = 5.5;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_4) {
  double number = 3.5;
  double numbertwo = 3.5;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_5) {
  double number = 953535.42;
  double numbertwo = 8.3;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_6) {
  double number = 0.0;
  double numbertwo = 1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_7) {
  double number = 0.0;
  double numbertwo = 2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_8) {
  double number = 0.0;
  double numbertwo = -1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_9) {
  double number = 0.0;
  double numbertwo = -2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_10) {
  double number = 1;
  double numbertwo = 0;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_11) {
  double number = 2;
  double numbertwo = 0;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_12) {
  double number = -1;
  double numbertwo = 0;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_13) {
  double number = -2;
  double numbertwo = 0;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_14) {
  double number = 1;
  double numbertwo = 1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_15) {
  double number = 1;
  double numbertwo = 2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_16) {
  double number = 1;
  double numbertwo = -1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_17) {
  double number = 1;
  double numbertwo = -2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_18) {
  double number = -1;
  double numbertwo = 1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_19) {
  double number = -1;
  double numbertwo = 2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_20) {
  double number = -1;
  double numbertwo = -1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_21) {
  double number = -1;
  double numbertwo = -2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_22) {
  double number = 2;
  double numbertwo = 1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_23) {
  double number = 2;
  double numbertwo = -1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_24) {
  double number = 2;
  double numbertwo = 2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_25) {
  double number = 2;
  double numbertwo = -2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_26) {
  double number = -2;
  double numbertwo = 1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_27) {
  double number = -2;
  double numbertwo = -1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_28) {
  double number = -2;
  double numbertwo = 2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_29) {
  double number = -2;
  double numbertwo = -2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_eq_tol(orig, answer, 1e-6);
}

START_TEST(fmod_30) {
  double number = S21_INF;
  double numbertwo = 0;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_31) {
  double number = -S21_INF;
  double numbertwo = 0;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_32) {
  double number = S21_INF;
  double numbertwo = 1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_33) {
  double number = -S21_INF;
  double numbertwo = 1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_34) {
  double number = S21_INF;
  double numbertwo = -1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_35) {
  double number = -S21_INF;
  double numbertwo = -1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_36) {
  double number = S21_INF;
  double numbertwo = 2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_37) {
  double number = -S21_INF;
  double numbertwo = 2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_38) {
  double number = S21_INF;
  double numbertwo = -2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_39) {
  double number = -S21_INF;
  double numbertwo = -2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_40) {
  double number = S21_INF;
  for (double i = 0; i < 500; i++) {
    double numbertwo = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_fmod(number, numbertwo);
    long double orig = fmodl(number, numbertwo);
    ck_assert_ldouble_nan(answer);
    ck_assert_ldouble_nan(orig);
  }
}

START_TEST(fmod_41) {
  double number = -S21_INF;
  for (double i = 0; i < 500; i++) {
    double numbertwo = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_fmod(number, numbertwo);
    long double orig = fmodl(number, numbertwo);
    ck_assert_ldouble_nan(answer);
    ck_assert_ldouble_nan(orig);
  }
}

START_TEST(fmod_42) {
  double number = S21_INF;
  double numbertwo = S21_INF;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_43) {
  double number = -S21_INF;
  double numbertwo = S21_INF;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_44) {
  double number = S21_INF;
  double numbertwo = -S21_INF;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_45) {
  double number = -S21_INF;
  double numbertwo = -S21_INF;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_46) {
  double number = S21_INF;
  double numbertwo = S21_NAN;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_47) {
  double number = -S21_INF;
  double numbertwo = S21_NAN;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_48) {
  double number = S21_NAN;
  double numbertwo = 0;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_49) {
  double number = S21_NAN;
  double numbertwo = 1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_50) {
  double number = S21_NAN;
  double numbertwo = -1;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_51) {
  double number = S21_NAN;
  double numbertwo = 2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_52) {
  double number = S21_NAN;
  double numbertwo = -2;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_53) {
  double number = S21_NAN;
  for (double i = 0; i < 500; i++) {
    double numbertwo = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_fmod(number, numbertwo);
    long double orig = fmodl(number, numbertwo);
    ck_assert_ldouble_nan(answer);
    ck_assert_ldouble_nan(orig);
  }
}

START_TEST(fmod_54) {
  double number = S21_NAN;
  double numbertwo = S21_NAN;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_55) {
  double number = S21_NAN;
  double numbertwo = S21_INF;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_56) {
  double number = S21_NAN;
  double numbertwo = -S21_INF;
  long double answer = s21_fmod(number, numbertwo);
  long double orig = fmodl(number, numbertwo);
  ck_assert_ldouble_nan(answer);
  ck_assert_ldouble_nan(orig);
}

START_TEST(fmod_57) {
  for (double i = 0; i < 500; i++) {
    double number = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    double exp = (double)rand() / RAND_MAX * (20000.0) - 10000.0;
    long double answer = s21_fmod(number, exp);
    long double orig = fmodl(number, exp);
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

Suite *fmod_suite(void) {
  Suite *s = suite_create("FMOD");
  TCase *tc_fmod = tcase_create("FMOD");
  tcase_add_test(tc_fmod, fmod_1);
  tcase_add_test(tc_fmod, fmod_2);
  tcase_add_test(tc_fmod, fmod_3);
  tcase_add_test(tc_fmod, fmod_4);
  tcase_add_test(tc_fmod, fmod_5);
  tcase_add_test(tc_fmod, fmod_6);
  tcase_add_test(tc_fmod, fmod_7);
  tcase_add_test(tc_fmod, fmod_8);
  tcase_add_test(tc_fmod, fmod_9);
  tcase_add_test(tc_fmod, fmod_10);
  tcase_add_test(tc_fmod, fmod_11);
  tcase_add_test(tc_fmod, fmod_12);
  tcase_add_test(tc_fmod, fmod_13);
  tcase_add_test(tc_fmod, fmod_14);
  tcase_add_test(tc_fmod, fmod_15);
  tcase_add_test(tc_fmod, fmod_16);
  tcase_add_test(tc_fmod, fmod_17);
  tcase_add_test(tc_fmod, fmod_18);
  tcase_add_test(tc_fmod, fmod_19);
  tcase_add_test(tc_fmod, fmod_20);
  tcase_add_test(tc_fmod, fmod_21);
  tcase_add_test(tc_fmod, fmod_22);
  tcase_add_test(tc_fmod, fmod_23);
  tcase_add_test(tc_fmod, fmod_24);
  tcase_add_test(tc_fmod, fmod_25);
  tcase_add_test(tc_fmod, fmod_26);
  tcase_add_test(tc_fmod, fmod_27);
  tcase_add_test(tc_fmod, fmod_28);
  tcase_add_test(tc_fmod, fmod_29);
  tcase_add_test(tc_fmod, fmod_30);
  tcase_add_test(tc_fmod, fmod_31);
  tcase_add_test(tc_fmod, fmod_32);
  tcase_add_test(tc_fmod, fmod_33);
  tcase_add_test(tc_fmod, fmod_34);
  tcase_add_test(tc_fmod, fmod_35);
  tcase_add_test(tc_fmod, fmod_36);
  tcase_add_test(tc_fmod, fmod_37);
  tcase_add_test(tc_fmod, fmod_38);
  tcase_add_test(tc_fmod, fmod_39);
  tcase_add_test(tc_fmod, fmod_40);
  tcase_add_test(tc_fmod, fmod_41);
  tcase_add_test(tc_fmod, fmod_42);
  tcase_add_test(tc_fmod, fmod_43);
  tcase_add_test(tc_fmod, fmod_44);
  tcase_add_test(tc_fmod, fmod_45);
  tcase_add_test(tc_fmod, fmod_46);
  tcase_add_test(tc_fmod, fmod_47);
  tcase_add_test(tc_fmod, fmod_48);
  tcase_add_test(tc_fmod, fmod_49);
  tcase_add_test(tc_fmod, fmod_50);
  tcase_add_test(tc_fmod, fmod_51);
  tcase_add_test(tc_fmod, fmod_52);
  tcase_add_test(tc_fmod, fmod_53);
  tcase_add_test(tc_fmod, fmod_54);
  tcase_add_test(tc_fmod, fmod_55);
  tcase_add_test(tc_fmod, fmod_56);
  tcase_add_test(tc_fmod, fmod_57);
  suite_add_tcase(s, tc_fmod);
  return s;
}