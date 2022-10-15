#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Starting point of the program
*program descriptiom 'Program assigns random number and prints last 5 values'
*return Always (0) for success
*/
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		num += n;
		printf("Last digit of %d is %d and is greater than 5\n", 
		n, num);

	}
	else if (n == 0)
	{
		printf("Last digit of n is %d and is 0\n", n, num);

	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n",
		n, num);

	}
	return (0);
}
