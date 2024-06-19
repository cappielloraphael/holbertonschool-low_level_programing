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

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}

	putchar('\n');
	return (0);
}



