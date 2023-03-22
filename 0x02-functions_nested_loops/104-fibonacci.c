#include <stdio.h>
/**
 * main - Entry point
 * Description: the first 98 of fibonacci starting from 1 2
 * @void: no params
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long long y = 0;
	unsigned long long x = 1;
	unsigned long long temp;

	for (i = 0; i < 98; i++)
	{
		temp = x;
		x = x + y;
		y = temp;
		printf("%llu", x);
		if (i < 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
