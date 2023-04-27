#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list_t list.
 * @head: A pointer to the beginning of the list_t list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
