#include <stdio.h>
/**
 * main - prints numbers
 *
 * Description - prints numbers fron one to nine
 *
 * Return: 0 if success non-zero if failure
 */

int main(void)
{
	for (int i=48; i<58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	
	return (0);
}
