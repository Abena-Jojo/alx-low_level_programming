#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @C: character to be checked
 *
 * Return: 1 if character is a letter, 0 otherwise
 */
int _isalpha(int C)
{
	if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}
