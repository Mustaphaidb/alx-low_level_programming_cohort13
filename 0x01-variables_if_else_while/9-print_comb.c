#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Task'
 * @void: The main function takes no parameters
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
