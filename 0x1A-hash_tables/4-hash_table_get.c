#include "hash_tables.h"
/**
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return NULL;

	node = ht->array[idx];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
