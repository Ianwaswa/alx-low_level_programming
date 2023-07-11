#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - convert arguments on command line to strings
 * @ac: int type
 * @av: pointer to array
 * Return: arguments as strings
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, len;

	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
