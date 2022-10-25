#include "main.h"
/**
*void swap_int - function that swaps the values of two integers
*@a: the first integer to be swapped
*@b: the second integer to be swapped
*/
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;


}
