#include "lists.h"
/**
 * add_node_end - add node to end of list
 * @head: head of list
 * @str: string
 * Return: address of new el or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
size_t nchar;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
for (nchar = 0; str[nchar] != '\0'; nchar++)
;
new->len = nchar;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
return (new);
}
