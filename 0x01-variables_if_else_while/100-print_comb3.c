#include <stdio.h>
/**
 * main - prints all possible combinations
 * of double-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int	i;
	int	j;

	i = 48;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
