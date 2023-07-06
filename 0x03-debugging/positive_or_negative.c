#include <stdio.h>
#include "main.h"
/**
 * Description - checks if n is negative or positive
 * or equals zero using if and else if
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{

	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
}
