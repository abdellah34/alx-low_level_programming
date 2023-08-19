#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_valid - checks if the num is composed of digits
 * @s: is a pointer of string
 * Return: an integer
 */
int is_valid(char *s)
{
	while(*s)
	{
		if(!isdigit(*s))
		{
			return (0);
		}
		s++;
		}
	return (1);
}
/**
 * main - check the code
 * @argv: argument vector
 *@argc: argument count
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if(!is_valid(argv[1]) && !is_valid(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n",num1 * num2);

	return (0);
}
