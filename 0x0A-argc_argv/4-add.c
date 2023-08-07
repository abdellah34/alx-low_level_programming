#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, c = 0, i, j;
	char *is_num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		is_num = argv[i];
		j = 0;
		while (is_num[j] != '\0')
		{
			if (!isdigit(is_num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		c = atoi(argv[i]);
		sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
