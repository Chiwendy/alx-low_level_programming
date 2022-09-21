#include  <stdio.h>
#include "main.h"

/**
 * main -  a function that swaps the values of two integers.
 *
 * @a: pointer deference for cahnging the value of the variale a
 * @b: pointer deference for changing the value of the variale b
 *
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
