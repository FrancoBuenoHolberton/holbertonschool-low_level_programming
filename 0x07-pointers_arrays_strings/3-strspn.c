#include "holberton.h"
#include <stdio.h>
/**
 *  _strspn - check the code for Holberton School students.
 * @s: char
 * @accept: char
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
 
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
break;
}
if (!accept[j])
break;
}
return (i);
}
