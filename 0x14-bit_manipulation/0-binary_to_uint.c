#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0;
	int power = 0;
	int total = 0;
	int i;

	if (!b)
		return (0);
	length = _strlen(b);
	for (i = length - 1; i >= 0; power++, i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += 1 << (power);
	}
	return (total);
}
