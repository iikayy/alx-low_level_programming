#include "main.h"

/**
 * print_alphabet_x10 -  funtn dat prints 10 times d alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int r;

	r = 0;

	while (r < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		r++;
	}
}

