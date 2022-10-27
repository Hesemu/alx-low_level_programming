#include "main.h"
/**
*_strncpy - function that copies a string
*@dest: buffer storing the string copy
*@src: the original string or source
*@n:the atmost number of bytes to be copied from src
*Return: pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_length = 0;

	while (src[i++])
		src_length++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_length; i < n; i++)
		dest[i] = '\0';

	return (dest);


}
