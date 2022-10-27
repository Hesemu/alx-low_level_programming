#include "main.h"
/**
*string_toupper - function that changes all lowercase letters of a string to
*	uppercase
*@st:the string in question
*Return:pointer to the changed string
*/


char *string_toupper(char *st)
{
	int i = 0;

	while (st[i])
	{
		if (st[i] >= 'a'; &&st[i] <= 'z')
			st[i] -= 32;
		i++;

	}
	return (st);


}
