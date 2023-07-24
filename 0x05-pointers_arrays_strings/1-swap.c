#include "main.h"
/**
*swap_int - swaps the values of two integers
*@a: The first  int pointer to swap with b
*@b: The second int pointer to swap with a
*Doses retun anything
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
