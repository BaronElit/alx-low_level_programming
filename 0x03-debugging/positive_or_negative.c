#include "main.h"
/*
 *positive_or_negative - check if number is positive or nagative or zero
 *@i: number to be check
 *Return: return 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
