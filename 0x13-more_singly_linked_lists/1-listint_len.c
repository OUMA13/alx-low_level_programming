#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* Initialize the count to 0 */

	while (h != NULL)
	{
		count++; /* Increment the count for each element */
		h = h->next; /* Move to the next element */
	}

	return (count); /* Return the total count */
}
