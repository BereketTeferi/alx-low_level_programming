#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - time count down
 */

void jack_bauer(void)
{
	char i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					printf("%d%d:%d%d\n", i, j, k, l);
				}
			}
		}
	}
}
