all: string_test

string_test: test.c ../../../String.h
	gcc --std=c11 -g test.c -o string_test
	gcc --std=c11 -g test_org.c -o string_test.org
	
clean:
	rm -f *.out string_test