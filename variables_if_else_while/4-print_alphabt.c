#include <stdio.h>

/**
 * main - prints letters
 *
 * Return: Always
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet <= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);

}
