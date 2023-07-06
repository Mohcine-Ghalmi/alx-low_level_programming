#include <stdio.h>
/**
 * main - prints all the alphabet
 * in reverse
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int	i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
