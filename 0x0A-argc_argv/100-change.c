#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * prnt_coins - print the minimum number of coins.
 * @money: the amount of money.
 * Return: Always 0.
 */
void prnt_coins(int money)
{
	int ch = 0;

	while (money >= 1)
	{
		if (money >= 25)
		{
			money -= 25;
			ch++;
			continue;
		}
		else if (money >= 10)
		{
			money -= 10;
			ch++;
			continue;
		}
		else if (money >= 5)
		{
			money -= 5;
			ch++;
			continue;
		}
		else if (money >= 2)
		{
			money -= 2;
			ch++;
			continue;
		}
		else
		{
			money -= 1;
			ch++;
			continue;
		}
	}
	printf("%d\n", ch);
}
/**
 * main - check the code
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}
	prnt_coins(money);
	return (0);
}
