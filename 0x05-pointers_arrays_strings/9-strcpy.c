#include "main.h"
/**
*_strcpy - function that copies the string pointed to by src, including the
*terminating null byte (\0), to the buffer pointed to by dest
*@src: source string to be copied
*@dest: buffer to copy the string to
*Return: Returns the value of dest
*/
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;

	}
	return (dest);

}
