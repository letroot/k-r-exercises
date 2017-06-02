#include "stdio.h"

/* Write a program to print
	the corresponding Celsius to Fahrenheit table.
*/

int main()
{
	float fahr, celcius;
	int upper, lower, step;

	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;
	printf("%4s\t%-5s\n", "celsius", "fahr");
	while (celcius <= upper) {
		fahr = (9.0/5.0) * celcius + 32;
		printf("%-4.0f %8.1f\n", celcius, fahr);
		celcius += step;
	}

	return 0;
}