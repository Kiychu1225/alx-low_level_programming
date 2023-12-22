#include "hash_tables.h"

/**
 * key_index -this  Gets the index at which a key/value pair should
 *             be stored in array of a hash table.
 * @key:this is the key to get the index of.
 * @size:this is  the size of the array of the hash table.
 *
 * return:returns  he index of the key.
 *
 * description:this  Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
