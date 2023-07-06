#include "main.h"
/**
* print_alphabet - a function that prints the alphabet, in lowercase
*
* Return: Always 0 (Succes)
*/
void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
