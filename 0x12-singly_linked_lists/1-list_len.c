#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;  // Initialize the counter.

    // Traverse the linked list and count the elements.
    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;  // Return the count.
}

