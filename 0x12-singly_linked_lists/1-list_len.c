#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; Initialize count to 0
	
		Traverse the linked list
	while (h != NULL)
	{
		count++; Increment the count for each element
		h = h->next; Move to the next element
	}
	return count;
}
