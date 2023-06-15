#include "lists.h"

/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list.
*@head: elements
*@n: address
*Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
dlistint_t *last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
new_node->prev = last;
}
return (new_node);
}
