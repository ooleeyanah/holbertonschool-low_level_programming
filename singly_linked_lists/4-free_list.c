#include "lists.h"
/**
 * free_list - frees list
 * @head: head
 * Return: no return
 */
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head->next;
free(head->str);
free(head);
head = current;
}
}
