// MyMallocTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "MyMalloc.h"

int main(){

	char *c = (char *)vrk_malloc(sizeof(char)* 10);

	printf("C: %d\n", c);

	vrk_free(c);

	displayBlob();

	char *b = (char *)vrk_malloc(sizeof(char)* 10);

	printf("B: %d\n", b);

	vrk_free(b);

	displayBlob();

	char *a = (char *)vrk_malloc(sizeof(char)* 10);
	
	printf("A: %d\n", a);

	vrk_free(a);

	displayBlob();

	char *d = (char *)vrk_malloc(sizeof(char)* 10);

	printf("D: %d\n", d);

	displayBlob();

	/*int *d = (int *)vrk_malloc(sizeof(int)* 10);

	printf("D: %d\n", d);

	int *e = (int *)vrk_malloc(sizeof(int)* 10);
	
	printf("E: %d\n", e);*/

	system("pause");
	return 0;
}
