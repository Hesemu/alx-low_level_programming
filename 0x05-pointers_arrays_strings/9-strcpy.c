#include "main.h"
/**
*_strcpy - function that copies the string pointed to by src, including the
*terminating null byte (\0), to the buffer pointed to by dest
*@src: source string to be copied
*@dest: buffer to copy the string to
*Return: Returns the value of dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i , '\0'] = src[i , '\0'];
		i++;

	}
	return (dest);

}
