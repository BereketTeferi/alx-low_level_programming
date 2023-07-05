#include <stdio.h>

/**
 * main -display alphabet
 *
 * Description - display the alphabet a-z all in lower case
 *
 * Return: 0 if success non zero otherwise
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
