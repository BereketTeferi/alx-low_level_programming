#include <stdio.h>

/**
 * main - display combination
 *
 * Description -displays combinations
 *
 * Return: 0 if success non-zero if failure
 */

int main(void)
{
	int i,j,k,l;
	for(i=48; i<58; i++)
	{
		if(l>48 && l<57)
		{
			putchar(',');
			putchar(' ');
		}
		for(j=48; j<58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			for(k=48; k<58; k++)
			{
				for(l=48; l<58; l++)
				{
					putchar(k);
					putchar(l);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
