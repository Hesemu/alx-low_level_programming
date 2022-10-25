#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - generates random valid passwords for the program
*Return: Always 0 for success
*/
int main(void)
{
	char passwd[84];
	int i = 0;
	int total = 0;
	int half1 = 0;
	int half2 = 0;

	srand(time(0));

	while (total < 2772)
	{
		passwd[i] = 33 + rand() % 94;
		total += passwd[i++];

	}
	passwd[i] = '\0';

	if (total != 2772)
	{
		half1 = (total - 2772) / 2;
		half2 = (total - 2772) / 2;
		if ((total - 2772) % 2 != 0)
			half1++;

		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + half1))
			{
				passwd[i] -= half2;
				break;


			}


		}


	}
	printf("%s", passwd);

	return (0);
}
