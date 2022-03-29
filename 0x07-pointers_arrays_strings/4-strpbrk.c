#include "main.h"
/**
 * _strpbrk - search for string for any set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: the sting since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int a =	0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}
	return ('\0');
}
