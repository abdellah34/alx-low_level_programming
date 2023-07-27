#include "main.h"
/**
* _strcmp -  compares two strings
* @s1: a string pointer
* @s2: a string pointer
* Return: the poiter to dest
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[j] == s1[i])
	{
		i++;
		j++;
	}
	return (s1[i] == s2[i] ? 0 : s1[i] - s2[i]);
}
