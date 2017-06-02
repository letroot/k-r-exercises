#include "stdio.h"

/* Write a program to print the value of EOF. */

int main()
{
	int c;

	while(1)
		if ((c = getchar()) == EOF)
			printf("%d", c);  // -1

	return 0;
}