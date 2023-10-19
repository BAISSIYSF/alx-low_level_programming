#include "lists.h"

/**
 * list_len - prints elements
 * Description - 'a program'
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
