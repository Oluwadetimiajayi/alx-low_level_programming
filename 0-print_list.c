#include "lists.h"

/** print_list - print the content of a linked list
 * @h: The given linked list
 *
 */
size_t print_list(const list_t *h)
{
	int num_nodes = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");

		num_nodes++;
		current = current->next;
	}

	return (num_nodes);
}
