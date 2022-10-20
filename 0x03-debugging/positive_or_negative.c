#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
*positive_or_negative - check if the number is positve or negative or zero
*@i: the variable to be check
*
*Return: return 0
*/
void positive_or_negative(int i)
{

  /*
   *srand(time(0));
   *i = rand() - RAND_MAX / 2;
   */
if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else
printf("%d is zero\n", i);
}
