#include<stdio.h>
/**
 *main - prints all the numbers of base 16 in lowercase
 *
 * Return:Value must be Zero (0)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'a';

	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
