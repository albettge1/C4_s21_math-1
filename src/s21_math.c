#include "s21_math.h"

long long int s21_factorial(int x) {
  return (x < 2) ? 1 : x * s21_factorial(x - 1);
}

int s21_abs(int x) {
  if (x < 0) x *= -1;
  return x;
}

long double s21_acos(double x) {
  long double answer = 0;
  if (x == 0) answer = S21_PI / 2;
  if (x > 1 || x < -1) answer = S21_NAN;
  if (x > 0 && x <= 1) answer = s21_atan(s21_sqrt(1 - x * x) / x);
  if (x >= -1 && x < 0) answer = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  if (x != x) answer = S21_NAN;
  return answer;
}

long double s21_asin(double x) {
  long double answer = 0;
  if (x == -1) answer = -S21_PI / 2;
  if (x == 1) answer = S21_PI / 2;
  if (x != x) answer = S21_NAN;
  if (x > -1 && x < 1) answer = s21_atan(x / s21_sqrt(1 - x * x));
  if (x > 1 || x < -1) answer = S21_NAN;
  return answer;
}

long double s21_atan(double x) {
  long double answer = 0;
  double bufx = x;
  if (bufx < 0) x = -x;
  int k = 5000;
  if (x < 0.9992) {
    for (int i = 0; i < k; i++)
      answer +=
          (s21_bin_pow(-1., i) / (2. * i + 1.)) * s21_bin_pow(x, 2 * i + 1);
  } else if (x > 1.0004) {
    x = 1. / x;
    for (int i = 0; i < k; i++)
      answer +=
          (s21_bin_pow(-1., i) / (2. * i + 1.)) * s21_bin_pow(x, 2 * i + 1);
    answer = S21_PI / 2. - answer;
  } else {
    double sub = x - 1;
    answer = 45 * S21_PI / 180 + sub * 0.5;
  }
  if (bufx < 0) answer = -answer;
  return answer;
}

long double s21_ceil(double x) {
  long double ceil = (long long int)x;
  if (x != x)
    ceil = S21_NAN;
  else if (x == S21_INF)
    ceil = S21_INF;
  else if (x == -S21_INF)
    ceil = -S21_INF;
  else if (x == S21_NEGZERO)
    ceil = S21_NEGZERO;
  else if (s21_fabs(x) > 0. && s21_fabs(x - ceil) > 0.)
    if (x > 0.) ceil += 1;
  return ceil;
}

long double s21_bin_pow(double base, unsigned long long exp) {
  long double answer = 1.0;
  while (exp != 0) {
    if ((exp & 1) != 0) answer *= base;
    base *= base;
    exp >>= 1;
  }
  return answer;
}

long double s21_cos(double x) {
  long double answer = 0;
  x = s21_fmod(x, 2 * S21_PI);
  if (x > S21_PI) x = x - 2 * S21_PI;
  if (x < -S21_PI) x = x + 2 * S21_PI;
  int k = 13;
  for (int i = 0; i < k; i++)
    answer +=
        (s21_bin_pow(-1, i) * s21_bin_pow(x, 2 * i)) / (s21_factorial(2 * i));
  return answer;
}

long double s21_sin(double x) {
  long double answer = 0;
  x = s21_fmod(x, 2 * S21_PI);
  if (x > S21_PI) x = x - 2 * S21_PI;
  if (x < -S21_PI) x = x + 2 * S21_PI;
  int k = 13;
  for (int i = 0; i < k; i++)
    answer += (s21_bin_pow(-1, i) * s21_bin_pow(x, 2 * i + 1)) /
              (s21_factorial(2 * i + 1));
  return answer;
}

long double s21_tan(double x) { return s21_sin(x) / s21_cos(x); }

long double s21_exp(double x) {
  long double value = 1;
  long double rez = 1;
  long double count = 1;
  if (x == S21_NAN)
    rez = S21_NAN;
  else if (x == S21_INF)
    rez = S21_INF;
  else if (x == -S21_INF)
    rez = 0;
  else
    while (s21_fabs(value) > S21_EPS) {
      value = value * (x / count);
      count = count + 1;
      rez = rez + value;
    }
  return rez;
}

long double s21_fabs(double x) {
  long double rez = 0;
  if (x < 0)
    rez = x * (-1);
  else
    rez = x;
  return rez;
}

long double s21_floor(double x) {
  long double floor = (long long int)x;
  if (x != x)
    floor = S21_NAN;
  else if (x == -S21_INF)
    floor = -S21_INF;
  else if (x == S21_INF)
    floor = S21_INF;
  else if (x == S21_NEGZERO)
    floor = S21_NEGZERO;
  else if (s21_fabs(x) > 0. && s21_fabs(x - floor) > 0.)
    if (x < 0.) floor -= 1;
  return floor;
}

long double s21_fmod(double x, double y) {
  long double rez = 0;
  if (y == 0)
    rez = S21_NAN;
  else if (x == S21_INF || x == -S21_INF)
    rez = S21_NAN;
  else {
    long long int mod = 0;
    mod = x / y;
    rez = (long double)x - mod * (long double)y;
  }
  return rez;
}

long double s21_log(double x) {
  long double answer = 0;
  if (x == 0) {
    answer = -S21_INF;
  } else if (x < 0) {
    answer = S21_NAN;
  } else if (x == S21_INF) {
    answer = S21_INF;
  } else {
    int k = 100;
    for (int i = 0; i < k; i++)
      answer += 2 * (x - s21_exp(answer)) / (x + s21_exp(answer));
  }
  return answer;
}

int is_extra_pow(double base, double exp, long double *rez) {
  int answer = 0;
  if (base == 0 && exp < 0) {
    answer = 1;
    *rez = S21_INF;
  } else if (base == 0 && exp > 0) {
    answer = 1;
    *rez = 0;
  } else if (base < 0 && s21_fmod(exp, 1) != 0) {
    *rez = S21_NAN;
    answer = 1;
  }
  if (exp == S21_INF || exp == -S21_INF) {
    if (base == 1 || base == -1) {
      answer = 1;
      *rez = 1;
    } else if (base == 0 && exp == S21_INF) {
      answer = 1;
      *rez = 0;
    } else {
      answer = 1;
      *rez = S21_INF;
    }
  }
  return answer;
}

int is_extra_pow2(double base, double exp, long double *rez) {
  int answer = 0;
  if (base == 1) {
    answer = 1;
    *rez = 1;
  }
  if (exp == 0) {
    answer = 1;
    *rez = 1;
  }
  if (base == S21_INF && exp > 0) {
    answer = 1;
    *rez = S21_INF;
  }
  if (base == -S21_INF && exp > 0) {
    answer = 1;
    if (s21_fmod(exp, 1) != 0)
      *rez = -S21_INF;
    else
      *rez = S21_INF;
  }
  if ((base == S21_INF || base == -S21_INF) && exp < 0) {
    answer = 1;
    *rez = 0;
  }
  return answer;
}

long double s21_pow(double base, double exp) {
  long double rez = 0;
  double exp_buf = exp;
  int exit = is_extra_pow(base, exp, &rez);
  int exit2 = is_extra_pow2(base, exp, &rez);
  if (!exit && !exit2) {
    if (exp < 0) exp *= -1;
    long long int exp_a = s21_floor(exp);
    double exp_b = exp - exp_a;
    if (base < 0) {
      base = -base;
      long double rez_a = s21_bin_pow(base, exp_a);
      long double rez_b = s21_exp(exp_b * s21_log(base));
      rez = rez_a * rez_b;
      if (s21_fmod(exp, 2) != 0) rez = -rez;
    } else {
      long double rez_a = s21_bin_pow(base, exp_a);
      long double rez_b = s21_exp(exp_b * s21_log(base));
      rez = rez_a * rez_b;
    }
    if (exp_buf < 0) rez = 1 / rez;
  }
  return rez;
}

long double s21_sqrt(double x) {
  long double answer = 0;
  if (x < 0) {
    answer = -S21_NAN;
  } else if (x == 0) {
    answer = 0.0;
  } else {
    answer = s21_exp(0.5 * s21_log(x));
  }
  return answer;
}
