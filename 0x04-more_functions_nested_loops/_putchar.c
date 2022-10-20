#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @number: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char number)
{
return (write(1, &number, 1));
}
