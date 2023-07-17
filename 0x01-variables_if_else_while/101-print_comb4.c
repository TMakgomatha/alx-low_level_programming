#include<stdio.h>
/**
 *main - prints all possible different combinations of three digits
 *
 * Return: value must always be Zero
 */
int main(void)
{
	int i, j, k;
	for (i = 0; 1 <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar((i % 3) + 48);
				putchar((j % 3) + 48);
				putchar((k % 3) + 48);
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);
}
