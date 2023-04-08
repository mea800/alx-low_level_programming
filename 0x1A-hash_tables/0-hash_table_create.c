#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table with the specified size.
 *
 * This function creates a new hash table of the specified size. If the size
 * is 0, NULL is returned. If memory allocation fails for the hash table or
 * its array, NULL is returned. Otherwise, a pointer to the newly created
 * hash table is returned.
 *
 * @size: The size of the hash table to create.
 *
 * Return: A pointer to the newly created hash table or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
    /* Check if size is zero */
	if (size == 0)
		return (NULL);
	/* Allocate memory for the hash table */
    new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	/* Initialize hash table size */
    new->size = size;
	/* Allocate memory for the hash table array */
    new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);
	/* Return pointer to the new hash table */
    return (new);
}