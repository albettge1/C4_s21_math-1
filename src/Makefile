CC=					gcc
CFLAGS=				-Wall -Wextra -Werror -std=c11 -pedantic
GCOVFLAGS=			-fprofile-arcs -ftest-coverage
SOURSES_MATH=		s21_m*.c
OBJECT_MATH=		$(patsubst %*.c, %*.o, $(SOURSES_MATH))
SOURSES_TEST=		test_*.c
OS=					$(shell uname -s)

ifeq ($(OS), Linux)
  CFLAGS+=			-D OS_LINUX
  CHECKFLAGS=			-lpthread -lcheck -pthread -lrt -lm -lsubunit
endif
ifeq ($(OS), Darwin)
  CFLAGS+=			-D OS_MAC
  CHECKFLAGS=		-lcheck
endif

all: clean s21_math.a

s21_math.a: $(SOURSES_MATH)
	$(CC) $(CFLAGS) -c $(SOURSES_MATH)
	@ar rcs s21_math.a $(OBJECT_MATH)
	@rm -rf ./*.o

test: rebuild_lib $(SOURSES_TEST)
	$(CC) $(CFLAGS) $(SOURSES_TEST) s21_math.a $(CHECKFLAGS) -o test
	./test

gcov_report: rebuild_lib
	@gcc $(GCOVFLAGS) $(SOURSES_TEST) $(SOURSES_MATH) $(CHECKFLAGS) -o GcovReport
	@./GcovReport
	@lcov -t "GcovReport" -o GcovReport.info -c -d .
	@genhtml -o report GcovReport.info
	@open ./report/index-sort-f.html
	@rm -rf ./*.gcno ./*gcda ./GcovReport.*

clang:
	@cp ../materials/linters/.clang-format .clang-format
	clang-format -n *.c *.h
	@rm .clang-format

valgrind: test
	valgrind --tool=memcheck --leak-check=yes ./test

valgrind_snap: test
	snap run valgrind --tool=memcheck --leak-check=yes ./test

leaks: test
	leaks -atExit -- ./test

rebuild_lib: clean s21_math.a

clean:
	@rm -rf ./a.out ./*.o ./*.a ./test ./GcovReport ./report ./*.info ./*.gcno ./*gcda

single_test: rebuild_lib
	$(CC) test_main.c s21_math.a -lm
	./a.out
