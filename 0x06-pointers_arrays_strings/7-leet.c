#include "main.h"
/**
  * leet - encodes a string
  * @a: pointer to array.
  * Return: array modified.
  **/
char *leet(char *a)
{
	char *lower = "aeotl";
	char *upper = "AEOTL";
	int replacers[] = {'4', '3', '0', '7', '1'};
	int i;
	char *a_ptr = a;

	while (*a != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*a == *(lower + 1) || *a == *(upper + 1))
				*a = replacers[i];
		}
		a++;
	}
	return (a_ptr);
}
