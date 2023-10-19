#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list
 * Description - 'a program'
 * @head: pointer
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
