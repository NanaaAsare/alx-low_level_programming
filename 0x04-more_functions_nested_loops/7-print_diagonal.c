#include "main.h"
/**
 *  print_diagonal - draws a diagonal line on the terminal.
 * @n:  is the number of diagonal line.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
	for (x = 0; x <	n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
