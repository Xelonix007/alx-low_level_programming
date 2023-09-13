#include "main.h"

/**
 * print_alphabet_x10 - a function that print tha alphabet 10 times
 * Return:0(success)
 */

void print_alphabet_x10(void)
{
char ch;
char j;
for (j = 1; j <= 10; j++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
_putchar('\n');
}
}
