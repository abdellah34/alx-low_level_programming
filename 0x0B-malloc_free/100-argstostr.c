#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate all the arguments of your program
 * @ac: num of args
 * @av: array of pointer to args
 * Return: a pointer to the duplicate string , or Null if it fail
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int tot_len = 0;
	char *newArr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			tot_len++;
	newArr = malloc(sizeof(char) * tot_len + ac + 1);
	if (newArr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			newArr[k] = av[i][j];
		newArr[k] = '\n';
		k++;
	}
	return (newArr);
}
