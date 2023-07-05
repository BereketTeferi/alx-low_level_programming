#include <stdio.h>

/**
 * main - prints hexadecimal
 *
 * Description - prints hexadeciaml numbers and letter in lower case
 *
 * Return: 0 if success non-zero if failure
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for(i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
