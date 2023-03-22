#include "main.h"
/**
 * _isalpha - prints 1 or 0
 *
 * Description: 'task 4'
 *
 * @c: takes a number
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	char a = 'A';
	char n = 'Z';

	for (; a <= n; a++)
	{
		if (a == c)
			return (1);
		if (a == 'Z')
		{
			a += 7;
			n = 'z';
		}
	}
	return (0);
}
