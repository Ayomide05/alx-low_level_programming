#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (sucess)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
