#include "main.h"
/**
 * print_alphabet - main entry of the program
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{

	int g;

	for (g = 'a'; g <= 'z'; g++)
	{
		putchar(g);
	}
	putchar('\n');
}
