#include "hash_tables.h"

/**
 * hash_djb2 -this is the  Hash function implementing the djb2 algorithm.
 * @str:this is the string to hash.
 * return:this returns  the calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
