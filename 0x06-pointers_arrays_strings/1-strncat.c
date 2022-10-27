#include "main.h"
/**
*_strncat - function that concatenates two strings, will use at most n bytes
*from src and src does not need to be null terminated
*@dest: The string to be appended
*@n: the number of bytes from src to append to dest
*@src: the string to append to dest
*Return: Pointer to string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[length++] = src[i];

	return (dest);


}
