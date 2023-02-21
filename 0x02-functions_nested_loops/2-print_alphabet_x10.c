#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 *  in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	int g;
	int times;
	for (times = 1; times <= 10; times++)
	
	{
		for (g = 'a'; g <= 'z'; g++)
		
		{
			putchar(g);
		}
		putchar('\n');
	}
}
