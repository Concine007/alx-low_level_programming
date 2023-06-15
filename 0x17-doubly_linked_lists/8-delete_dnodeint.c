#include "lists.h"

/**
*delete_dnodeint_at_index - deletes the node at index index
*@head: element
*@index: the index of the node
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
while (current != NULL && i < index - 1)
{
current = current->next;
i++;
}
if (current == NULL)
{
return (-1);
}
dlistint_t *next = current->next;
current->next = next->next;
next->next->prev = current;
free(next);
return (1);
}
