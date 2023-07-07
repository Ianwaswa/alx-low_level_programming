#include "main.h"
#include <stdio.h>
/**
 * main - checks the code to print the number of args
 * @arg: count argument
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
