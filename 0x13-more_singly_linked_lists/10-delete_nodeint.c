#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to listint_t
 * @index: index of the node;
 * Return: 1 if succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp1;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	temp1 = *head;
	if (index == 0)
	{
		temp = temp1->next;
		free(*head);
		*head = temp;
	}
	else
	{
		while (i < (index - 1))
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		temp1 = temp->next;
		temp->next = temp->next->next;
		free(temp1);
	}
	return (1);
}
