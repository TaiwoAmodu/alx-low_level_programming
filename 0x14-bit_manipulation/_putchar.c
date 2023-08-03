#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdouts
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
