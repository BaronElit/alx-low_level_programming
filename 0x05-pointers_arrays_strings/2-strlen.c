#include "main.h"
/**
 *_strlen -returne length of a string
*@s: string
*Return: returns lentgth;
*/
int _strlen(char *s)
{
int count, inc;
 inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;
return (inc);
}
