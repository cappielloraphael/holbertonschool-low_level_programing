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
		if (alphabet !='q' && alphabet !='e')
		{
			putchar(alphabet);
		}
	}

	putchar('\n");
	return (0);
}



