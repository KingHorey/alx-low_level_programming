#include "lists.h"
/**
 *dlistint_len - function returns the number of element in a linked list
 *@h: pointer to the head node of the list
 *Return: number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num_element;

	num_element = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		num_element++;
	}
	return (num_element);
}
