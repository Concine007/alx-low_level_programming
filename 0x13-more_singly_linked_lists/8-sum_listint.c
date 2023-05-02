#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked lis
 * @head: first node
 * Return: sum of all the data (n) of a listint_t
 */

int sum_listint(listint_t *head)
{
int num = 0;
listint_t *x = head;

while (x)
{
num += x->n;
x = x->next;
}
return (num);
}
