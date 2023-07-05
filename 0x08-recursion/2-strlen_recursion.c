#include "main.h"
/**
 * _strlen_recursion - Function to get length of a string
 * @s: the string
 * main - checks the code
 * Return: string length as an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
