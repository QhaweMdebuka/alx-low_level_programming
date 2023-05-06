#include "main.h"
#include <unistd.h>

/**
 * _putchar - writed the single character to the standard output system 
 * @c: the character is too be printed into the function as an argument 
 *
 * Return: on success 1 
 * On error: return -1 and errno , to display coding error 
 */

int _putchar(char c)
{
	return(write(1, &c,1));
}
