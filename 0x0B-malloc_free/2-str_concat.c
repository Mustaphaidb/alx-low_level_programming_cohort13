#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
int i, j, lenght_s1 = 0, lenght_s2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[lenght_s1] != '\0')
lenght_s1++;
while (s2[lenght_s2] != '\0')
lenght_s2++;

new_str = malloc((lenght_s1 + lenght_s2 + 1) * sizeof(char));
if (new_str == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
new_str[i] = s1[i];

for (j = 0; s2[j] != '\0'; j++)
new_str[i + j] = s2[j];

new_str[i + j] = '\0';

return (new_str);
}
