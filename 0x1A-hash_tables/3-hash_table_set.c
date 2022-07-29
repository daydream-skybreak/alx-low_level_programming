#include "hash_tables.h"
/**
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *vlu_cpy;
	unsigned long int idx, i;

	if(ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vlu_cpy = strdup(value);
	if (vlu_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for(i = idx; ht->array[i]; i++)
	{
		if(strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vlu_cpy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(vlu_cpy);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		free(vlu_cpy);
		return (0);
	}

	node->value = vlu_cpy;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
