#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - print alphabet x10
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count;


		for (count = 0; count <= 10; count++)
		{

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	
}
}
