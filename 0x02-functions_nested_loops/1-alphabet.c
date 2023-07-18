#include "main.h"
void print_alphabet(void);

/**
 * main - prints alphabets
 *
 * Return: always 0 if success
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
