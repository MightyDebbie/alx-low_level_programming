#include <stdio.h>


int * -magic main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * line of code here.
	 * modification not allowed
	 * I'm enough
	 * code just this line
	*/
	*(p + 5) = 98;
	/*...so this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

