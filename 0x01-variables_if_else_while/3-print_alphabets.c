#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point of the program
* Description 'program that prints the alphabet in lowercase and uppercase'
*Return: Always (0) success
*/
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(toupper(alphabet));

	}
	putchar('\n');
	return (0);
}
