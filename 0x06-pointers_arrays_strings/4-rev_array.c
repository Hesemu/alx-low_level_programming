#include "main.h"
/**
*reverse_array - function that reverses the content of an array of integers
*@a: the array of integers in question
*@n: the number of elements(content) in the array
*/

void reverse_array(int *a, int n)
{
	int tmp = 0;
	int i = 0;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;


	}


}
