#include "main.h"
#include <stdio.h>
/**
*print_array - function that prints the elements of an array
*@a: The array of the numbers
*@n: The number of elements to print
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(",");

	}
	printf("\n");


}

