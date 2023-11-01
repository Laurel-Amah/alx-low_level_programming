#include "main.h"

/**
 * _strdup-  duplicates string input to memory with malloc
 * @str: the string it recieves
 * Return: nstr
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *nstr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	nstr = malloc((len + 1) * (sizeof(char)));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		nstr[i] = str[i];
	nstr[i] = '\0';
	return (nstr);
	free(nstr);
}

