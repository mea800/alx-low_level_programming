/**
 * hash_djb2 - DJB2 hashing algorithm implementation
 * @str: string used to generate hash value
 *
 * Returns: 64-bit hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
