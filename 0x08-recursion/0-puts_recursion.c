#include "main.h"
/**
 * _puts_recursion - my function
 * main - check the code
 * @s: string
 * Return: 0 always
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*str);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
