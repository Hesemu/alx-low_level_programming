#include <stdio.h>
/**
* main - Entry point of program*
* Description: 'this is a program that prints sizes of types'
* Return: Always 0 (Success)
*/

int main(void)
{
	printf("The size of a char: %u byte(s) \n", sizeof(char));
	printf("The size of an int: %u byte(s)\n", sizeof(int));
	printf("The size of a long int: %u byte(s)\n", sizeof(long));
	printf("The size of a long long int: %u byte(s)\n", sizeof(long long));
	printf("The size of a float: %u\n byte(s)\n", sizeof(float));
	return (0);

}
