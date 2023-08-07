#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argv: argument vector
 *@argc: argument count
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 2 && argc < 4)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
