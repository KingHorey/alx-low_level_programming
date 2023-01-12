#include "lists.h"
/**
 *print_dlistint - function prints all elements of a doubly linked list
 *@h: pointer to the head node of the list
 *Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t node_counter;

	node_counter = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node_counter++;
	}
	return (node_counter);
}
