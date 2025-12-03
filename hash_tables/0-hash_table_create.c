#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of array
 * Return: pointer to new table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
ht = malloc(sizeof(hash_table_t));
if (!ht)
return (NULL);
ht->size = size;
ht->array = calloc(size, sizeof(hash_node_t *));
if (!ht->array)
{
free(ht);
return (NULL);
}
return (ht);
}
