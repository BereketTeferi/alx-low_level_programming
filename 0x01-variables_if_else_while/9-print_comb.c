#include <stdio.h>

/**
 * main - displays numbers
 *
 * Description - display number 1-9 in ascending order sparated by comma and space
 *
 * Return: 0 if success non-zero if failure
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
