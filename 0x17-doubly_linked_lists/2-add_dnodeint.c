#include "lists.h"
/**
 *add_dnodeint - asdoasdoaso
 *@n: infoopro
 *@head: Heder:D
 *Return: Successpoint
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->prev = NULL;
newnode->next = *head;
*head = newnode;
return (newnode);
}
