#include "main.h"
/**
 *_puts- prins a string, followed by a nw line.
 *@str: string to print
 *Return: the bmber of characters printed
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
