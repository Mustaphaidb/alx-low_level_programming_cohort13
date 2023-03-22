#include <stdio.h>
/**
 * main - Entry point
 * Description: the first 50 of fibonacci starting from 1 2
 * @void: no params
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	long int y = 0;
	long int x = 1;
	long int temp;

	for (i = 0; i < 50; i++)
	{
		temp = x;
		x = x + y;
		y = temp;
		printf("%ld", x);
		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
