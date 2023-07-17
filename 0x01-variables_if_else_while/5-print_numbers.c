#include<stdio.h>
/**
 *main -print base numbers 0 to 9
 *
 * Return:Must always be 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
