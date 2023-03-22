#include "main.h"
/**
 * _islower - prints 1 or 0 depending on c
 *
 * Description: 'task 3'
 *
 * @c: c is a character
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}
