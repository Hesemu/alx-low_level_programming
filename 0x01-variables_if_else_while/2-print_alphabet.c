#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point of the program
*Description 'the program prints the alphabet in lowercase'
*Return: Always (0) indicating success
*/
int main(void)
{
	char alphabet = 'A';
	if (alphabet <= 'Z')
	{
		putchar(tolower(alphabet));
	}
	putchar('\n');
	return (0);
}
