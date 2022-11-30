#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all data in a list
 * @h: pointer to first node
 * Return: number of nodes(count)
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	for (h; h; h = h->next)
	{
		if(h->str)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", _strlen(h->str), h->str);

		count++;
	}

	return (count);
}

int _strlen(char *s)
{
    int len = 0;
    while (s && s[len])
    len++;
 
    return (len);
}
