#include "hash_tables.h"

/**
 * key_index - Gives the index of the key
 * @key: is the key
 * @size: size of the array of hash table
 * Return: the index at which key-value will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
