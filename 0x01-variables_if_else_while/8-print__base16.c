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

	for (n = 48; n <= 102; n++)
	{
		if (n == 58)
			n += 39;
		putchar(n);
	}
	putchar('\n');

	return (0);
}
