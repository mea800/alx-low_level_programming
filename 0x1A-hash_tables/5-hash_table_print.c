#include "hash_tables.h"

/**
 * hash_table_print - Print the contents of a hash table.
 * @ht: Pointer to the hash table to be printed.
 *
 * Return: No return value.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0, n = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = n; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				printf("%s'%s': '%s'", n == 0 ? "" : ", ",
					   node->key, node->value), n++;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
