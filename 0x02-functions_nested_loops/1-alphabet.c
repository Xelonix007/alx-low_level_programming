#include "main.h"

/**
 * main - A function thta prints out  the alphabet in a line.
 * Return:0(success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
