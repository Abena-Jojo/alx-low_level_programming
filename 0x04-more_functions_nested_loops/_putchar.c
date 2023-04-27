#include <unistd.h>
#include "main.h"

/**
* _putchar - write the character c to stdout
* @C: The character to print
* Return: 1 if true, 0 if false
* On error, -1 return.
*/
int _putchar(char C)
{
return (write(1, &C, 1));
}
