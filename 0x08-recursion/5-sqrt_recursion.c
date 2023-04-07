#include "main.h"
/**
 * _sqrt_recursion - return is i
 * Description: 'task 5'.
 *
 * @n: integer
 * @i: integer
 * Return: _pow_recursion function
 */
int actual_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
