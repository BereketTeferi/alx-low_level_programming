#include <stdio.h>

/**
 * main - print a-z without e and q
 *
 * Description - print every alphabets except 'e' and 'q'
 *
 * Return: 0 if success non-zero if failure
 */

int main(void)
{
	char letter;

	for (letter='a'; letter<='z'; letter++)
	{
		if(letter!='e' && letter!='q')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
