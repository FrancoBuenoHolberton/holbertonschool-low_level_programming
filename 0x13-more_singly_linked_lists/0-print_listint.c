#include "lists.h"
#include <stdio.h>
/**
 *print_listint - print all the elements the listint
 *@h: header
 *Return: Always Sucess (0)
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
