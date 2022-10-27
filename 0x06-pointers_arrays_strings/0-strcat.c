#include "main.h"
/**
*_strcat - function that concatenates two strings
*@src: The source string to be appended to dest
*@dest: A pointer to the string to be concatenated
*Return: returns a pointer to the destination string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i]; i++)
		dest[length++] = src[i];

	return (dest);



}
