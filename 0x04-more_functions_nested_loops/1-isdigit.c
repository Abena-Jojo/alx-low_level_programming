#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @x: The number to be checked
 * Return: 0 or 1
 */

int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}
