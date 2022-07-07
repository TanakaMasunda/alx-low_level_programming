#include "hash_tables.h"

/**
 * key_index - provides the index of the key
 * @key: key of key or value pair
 * @size: size of the array of the hash table
 * Return: indx where key/value pair should be stored in array of th hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
