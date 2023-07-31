#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	size_t new_n;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *), head ->n);
		counter++;
		new_n = 0;
		while (new_n < counter)
		{
			if (head == NULL)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (counter);
			}
			head = head->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}