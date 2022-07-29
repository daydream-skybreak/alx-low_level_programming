#include "hash_tables.h"
/**
 * key_index - generates an index where a value is stored in the hash table
 * @key: string from which key is going to be generated
 * @size: the size of the hash table
 * Return: the index where the key is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int id;

	id = hash_djb2(key);

	return (id % size);
}
