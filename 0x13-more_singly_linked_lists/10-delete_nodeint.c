#include "lists.h"

/**
 * Function that deletes the node at index index of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Description: Returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempNode = *head;
	listint_t *currentNode = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}

	while (p < index - 1)
	{
		if (!tempNode || !(tempNode->next))
			return (-1);
		tempNode = tempNode->next;
		p++;
	}


	currentNode = tempNode->next;
	tempNode->next = currentNode->next;
	free(currentNode);

	return (1);
}
