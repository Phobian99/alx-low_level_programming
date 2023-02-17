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
        putchar(Y);
        }
	for (Y = 'A'; Y <= 'Z'; Y++)
	{
		putchar(Y);
	}
        putchar('\n');
        return (0);
}
