#include "main.h"

/**
 * print_most_numbers - functions checks for a digit(success 9)
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	-putchar('\n');
}
