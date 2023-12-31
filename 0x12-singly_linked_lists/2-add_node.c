#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Description: Returns the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int newElem = 0;

	while (str[newElem])
		newElem++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->newElem = newElem;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}

