#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*res)(int, int);
	int num1, num2;
	char *oprtr = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (*oprtr == '/' || *oprtr == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(oprtr);
	if (!res)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", res(num1, num2));
	return (0);
}
