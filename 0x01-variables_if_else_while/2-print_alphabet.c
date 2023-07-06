#include <stdio.h>
/**
 * main - prints all the alphabet
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int	i;

	i = 97;
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
