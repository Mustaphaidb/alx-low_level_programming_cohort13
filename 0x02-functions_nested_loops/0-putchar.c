#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'task 0'
 * @void: does not take any parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
