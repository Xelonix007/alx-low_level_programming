#include "main.h"

/**
 * print_alphabet - A function that print the the alphabet in lower_case letter
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
