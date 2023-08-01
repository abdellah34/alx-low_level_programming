#include "main.h"
/**
* _strspn - guets the length of prefix substring
* @s: is the string to scanned
* @accept: is the string contains the list of characters
* Return: the number of characters in initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *pnt = accept;
	int i, fnd, j = 0;


	while (s[j])
	{
		fnd = 0;
		for (i = 0; pnt[i] != '\0' ; i++)
		{
			if (s[j]  == pnt[i])
			{
				fnd = 1;
			}
		}
		if (!fnd)
		{
			break;
		}
		j++;
		n++;
	}
	return (n);
}
