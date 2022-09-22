#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 are equal
 *
 * negative integer if the stopping character
 *
 * in @s1 was less than the stopping
 *
 * character in @s2
 *
 * positive integer if the stopping character
 *
 * in @s1 was greater than the stopping
 *
 * character in @S2
 */

int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];

	return (cmpVal);
}
