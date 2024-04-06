#include "test_main.h"

int main(void) {
  int no_failed = 0;
  SRunner *runner;
  runner = srunner_create(abs_suite());
  srunner_add_suite(runner, cos_suite());
  srunner_add_suite(runner, sin_suite());
  srunner_add_suite(runner, tan_suite());
  srunner_add_suite(runner, asin_suite());
  srunner_add_suite(runner, atan_suite());
  srunner_add_suite(runner, acos_suite());
  srunner_add_suite(runner, log_suite());
  srunner_add_suite(runner, sqrt_suite());
  srunner_add_suite(runner, pow_suite());
  srunner_add_suite(runner, ceil_suite());
  srunner_add_suite(runner, exp_suite());
  srunner_add_suite(runner, fabs_suite());
  srunner_add_suite(runner, floor_suite());
  srunner_add_suite(runner, fmod_suite());
  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}