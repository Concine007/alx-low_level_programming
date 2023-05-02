#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *x;
listint_t *t = *head;

x = malloc(sizeof(listint_t));
if (!x)
return (NULL);
x->n = n;
x->next = NULL;
if (*head == NULL)
{
*head = x;
return (x);
}
while (t->next)
t = t->next;
t->next = x;
return (x);
}
