#include "main.h"

/**
 * *print_numbers - print 0123456789
 * * owned by Monique
 * *Return: void
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
