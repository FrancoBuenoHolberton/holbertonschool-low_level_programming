#include "holberton.h"
/**
 *_isdigit - check the digit of 0 trought 9
 *@c : character
 *Return: if c is a digit return 1 - if is otherwise return 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
