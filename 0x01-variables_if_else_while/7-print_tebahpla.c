#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Task'
 * @void: The main function takes no parameters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
