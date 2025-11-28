#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: head
 * @index: node index to delete
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;
if (head == NULL || *head == NULL)
return (-1);
temp = *head;
if (index == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}
while (temp != NULL)
{
if (i == index)
{
if (temp->prev != NULL)
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
free(temp);
return (1);
}
temp = temp->next;
i++;
}
return (-1);
}
