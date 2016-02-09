all: tests

SOURCES="String.h"

MyCLib: ${SOURCES}
	gcc --std=c11 -WAll -fPIC -fno-builtin -O2 ${SOURCES}

tests: String.h test_string.c
	gcc --std=c11 -WAll -fPIC -fno-builtin -g -O2 test_string.c -o test_string

clean:
	rm -f *.out test_string
