#include "main.h"
#include <stdio.h>
/**
 * main - Prints all arguememts it received
 * @argc: The number of arguements supplied to the program
 * @argv: An array of pointers to the arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[]);
	}

	return (0);
}
