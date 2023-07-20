#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase.
 * 
 */
void print_alphabet_x10(void)
{
	char  alphabet = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (alphabet	<= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		alphabet++;
		}
}
