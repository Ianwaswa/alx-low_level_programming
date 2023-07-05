#include "main.h"
/**
 * _puts_recursion - my function
 * main - check the code
 * @str: string
 * Return: 0 always
 */
void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
