#include <stdio.h>
#include <3-calc.h>

/**
 * main - check the code
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int res = 0, num1,num2, i, j;
	char *operator = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]); 
       
	if(num2 == 0 && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", sum);
	return (0);
}
    return (0);
}
