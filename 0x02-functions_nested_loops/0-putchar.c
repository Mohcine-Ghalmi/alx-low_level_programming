#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* main - print all base 10 digits
*
* Return: 0
*/
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
