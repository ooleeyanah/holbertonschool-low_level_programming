#include "lists.h"
/**
 * add_node - adds node to beginning of list
 * @head: head of list
 * @str: string
 * Return: address of new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
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
for (nchar = 0; str[nchar]; nchar++)
;
new->len = nchar;
new->next = *head;
*head = new;
return (*head);
}
