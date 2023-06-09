#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node
 * @index: index to return
 * Return: nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *x = head;

while (x && a < index)
{
x = x->next;
a++;
}
return (x ? x : NULL);
}
