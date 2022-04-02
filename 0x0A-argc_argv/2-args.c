#include <stdio.h>
/**
 * main - Prints all arguememts it received
 * @argc: The number of arguements supplied to the program
 * @argv: An array of pointers to the arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		print("%s\n", argv[arg]);

	return (0);
}
