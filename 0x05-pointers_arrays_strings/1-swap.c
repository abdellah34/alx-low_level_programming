#include "main.h"
/**
*swap_int swaps the values of two integers
*@a: The first  int pointer
*@b: The second int pointer 
*Doses retun anything
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
