#include<stdio.h>
/**
 *main - prints all possible different combinations of two digits
 *
 * Return: value must always be Zero
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i / 10) + 48);
		putchar((i % 10) + 48);
		if (i != 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
