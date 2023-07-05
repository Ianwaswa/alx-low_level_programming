#include "main.h"
/**
 * _puts_recursion - my function
 * main - check the code
 * @s: string
 * Return: 0 always
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
