#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Main - Start point of the program
* The program asssigns random numbers and prints the results
* Return: Always 0 for success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);

	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);

	}
	else if (n < 0)
	{
		printf("%d is negative\n", n );

	}
	return (0);
}
