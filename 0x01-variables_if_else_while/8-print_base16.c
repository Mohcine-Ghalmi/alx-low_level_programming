#include <stdio.h>
/**
 * main - print all base 16 digits
 *
 * Return: 0
 */
int main(void)
{
	int	i;

	i = 48;
	while (i <= 'f')
	{
		putchar(i);
		i++;
		if (i == 58)
			i = 97;
	}
	putchar(10);
	return (0);
}
