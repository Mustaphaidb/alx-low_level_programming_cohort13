#include <stdio.h>
/**
 * main - Entry point
 * Description: add the even numbers of fibonacci that do not exceed 4.000.000
 * @void: no params
 * Return: always 0 (Success)
 */
int main(void)
{
	long int y = 0;
	long int x = 1;
	long int temp;
	long int sum = 0;

	while (x < 4000000)
	{
		temp = x;
		x = x + y;
		y = temp;
		if (x % 2 == 0)
			sum += x;
	}
	printf("%ld\n", sum);
	return (0);
}
