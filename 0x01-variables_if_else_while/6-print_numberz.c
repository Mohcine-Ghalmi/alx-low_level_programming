#include <stdio.h>
/**
 * main - print all base 10 digits
 *
 * Return: 0
 */
int main(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
