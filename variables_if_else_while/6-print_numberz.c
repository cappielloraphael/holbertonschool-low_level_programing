#include <stdio.h>

/**
 * main - prints numbers z
 *
 * Return: Always
 *
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}

