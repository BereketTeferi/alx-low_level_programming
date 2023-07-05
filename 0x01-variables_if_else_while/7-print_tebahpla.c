#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Description -there is a twist prints in reverse order
 *
 * Return: 0 if success non-zero if failure
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
