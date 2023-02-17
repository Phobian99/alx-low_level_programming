#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0(succes)
 */
int main(void)

{
	char Y;
	
	for (Y = 'a'; Y <= 'z'; Y++)
	{
		if (Y != 'q'&&Y != 'e')
			putchar(Y);
	}
	putchar('\n');
	return (0);
} 
