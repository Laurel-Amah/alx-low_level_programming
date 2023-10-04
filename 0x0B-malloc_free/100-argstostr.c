#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr- concates all arguments
 * @ac: the number of arguments
 * @av: the array containing argument vectors
 * Return: pav
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int len = 0;
	char *pav;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	pav = malloc((len + 1) * (sizeof(char)));
	if (pav == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			pav[k] = av[i][j];
			k++;
		}
		pav[k] = '\n';
		k++;
	}
	pav[len] = '\0';
	return (pav);
	free(pav);
}
