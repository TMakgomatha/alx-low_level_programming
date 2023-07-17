#include<stdio.h>
/**
 *main - prints all possible combinations of single-digit numbers
 *
 * Return:  value must always be Zero
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			putchar(i + 48);
			if (i != 9 || j != 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}
