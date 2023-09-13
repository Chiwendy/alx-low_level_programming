#include "main.h"

/**
 * main - entry point
 *
 * Description: This function prints alphabet in lowercase
 * @parameter: void print_alphabet(void)
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
