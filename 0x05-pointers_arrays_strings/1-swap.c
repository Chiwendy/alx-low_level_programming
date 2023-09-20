#include  <stdio.h>
#include "main.h"

/**
 * main -  a function that swaps the values of two integers.
 *
 * @a: pointer deference for changing the value of the variable a
 * @b: pointer deference for changing the value of the variable b
 *
 * Return: always 0
 */

void swap_int(int *a, int *b
)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
