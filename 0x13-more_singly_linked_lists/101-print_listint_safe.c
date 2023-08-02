#include "lists.h"
#include <stdio.h>

size_t loop_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * Function that prints a listint_t linked list.
 * This function can print lists with a loop
 * @head: A pointer to the head of the listint_t to check.
 *
 * DEscripton: Returns the number of nodes in the list.
 * If the function fails, exit the program with status 98
 */

size_t loop_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t numNodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				numNodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				numNodes++;
				tortoise = tortoise->next;
			}

			return (numNodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}


size_t print_listint_safe(const listint_t *head)
{
	size_t numNodes, i = 0;

	numNodes = loop_listint_len(head);

	if (numNodes == 0)
	{
		for (; head != NULL; numNodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < numNodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (numNodes);
}

