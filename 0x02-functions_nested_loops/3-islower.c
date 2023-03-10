#include "main.h"

/**
 * _islower -> checks if a character is lowercase.
 * @c: the character to be checked.
 *
 * Return: 1 if character is lowercase (Failure), 0 otherwise (Success).
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
