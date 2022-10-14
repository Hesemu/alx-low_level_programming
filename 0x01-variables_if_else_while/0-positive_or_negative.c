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
		printf("is positive\n");
		if (n == 0)
		{
			printf("is zero\n");

		}
		if (n < 0)
		{
			printf("is negative\n");

		}

	}
	return (0);
}
