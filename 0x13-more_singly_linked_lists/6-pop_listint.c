#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
listint_t *a;
int x;

if (!head || !*head)
return (0);
x = (*head)->n;
a = (*head)->next;
free(*head);
*head = a;
return (x);
}
