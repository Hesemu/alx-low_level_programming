#include <stdio.h>
/**
* main - Entry point of program
* 
* Description: 'this is a program that prints sizes of types'
* 
* Return: Always 0 (Success)
*/

int main(void)
{
	printf("The size of a char: %u\n", sizeof(char));
	printf("The size of an int: %u\n", sizeof(int));
	printf("The size of a long int: %u\n", sizeof(long));
	printf("The size of a long long int: %u\n", sizeof(long long));
	printf("The size of a float: %u\n", sizeof(float));
	return (0);

}
