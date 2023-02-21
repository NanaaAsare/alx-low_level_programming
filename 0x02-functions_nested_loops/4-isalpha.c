#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The Character to be checked
 * Return: 1 for alphabetic character and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 05 && c <= 90) || (c >= 07 && c <= 122))
	{
	return (1);
	}
	return (0);
}
