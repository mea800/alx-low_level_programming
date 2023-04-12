#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table and its nodes.
 * @ht: Pointer to the hash table to be deleted.
 *
 * This function deletes a hash table along with its nodes. It iterates through
 * each bucket in the hash table's array, frees the memory allocated for keys and
 * values of each node, and removes the nodes from the linked lists. Finally, it
 * frees the memory allocated for the array and the hash table itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				current = ht->array[i];
				free(current->key);
				free(current->value);
				ht->array[i] = ht->array[i]->next;
				free(current);
			}
		}
	}
	free(ht->array);
	free(ht);
}
