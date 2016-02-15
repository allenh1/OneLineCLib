#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void test1()
{
	const char * a = "a\0";
	const char * b = "b\0";

	assert(strcmp(a, b) <= -1);
	assert(strcmp(b, a) >=  1);
	assert(strcmp(a, a) ==  0);
	printf("test1 passed\n");
}

void test2()
{
	char * aa = strdup("apple");
	char * bb = strdup("applesauce");

	assert(strcmp(aa, bb) <= -1);
	assert(strcmp(bb, aa) >=  1);
	assert(strcmp(aa, aa) ==  0);
	free(aa); free(bb);
	printf("test2 passed\n");
}

void test3(){}
void test4(){}
void test5(){}
void test6(){}
void test7(){}
void test8(){}
void test9(){}
void test10(){}


int main(int argc, char ** argv)
{
	if (argc != 2) goto error;
	else if (!strcmp(argv[1], "test1")) {
		test1();
	} else if (!strcmp(argv[1], "test2")) {
		test2();
	} else if (!strcmp(argv[1], "test3")) {
		test3();
	} else if (!strcmp(argv[1], "test4")) {
		test4();
	} else if (!strcmp(argv[1], "test5")) {
		test5();
	} else if (!strcmp(argv[1], "test6")) {
		test6();
	} else if (!strcmp(argv[1], "test7")) {
		test7();
	} else if (!strcmp(argv[1], "test8")) {
		test8();
	} else if (!strcmp(argv[1], "test9")) {
		test9();
	} else if (!strcmp(argv[1], "test10")) {
		test10();
	} else goto error;

	return 0;

	error:
	printf("Error: bad testcase!\n");
	printf("Usage: test test1|test2|...|test10\n");
	printf("\nIf you feel this is incorrect, there may be an issue with strcmp.\n");
}