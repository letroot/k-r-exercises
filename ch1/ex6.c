#include "stdio.h"

/* Verify that the expression getchar() != EOF is 0 or 1. */

int main()
{

	while(1)
		printf("%d ", getchar() != EOF);

	return 0;
}