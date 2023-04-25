#include "main.h"

/**
 * _islower - checks if a charcter is lowercase
 * @C: the character
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(int C)
{
	if (C >= 97 && C <= 122)
	{
		return (1);
	}
	return (0);
}
