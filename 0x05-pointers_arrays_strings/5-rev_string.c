#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rev_string - copy the reversed string to the poiter
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int len, i, j;
	char *rev;

	len = strlen(s);
	rev = malloc(len + 1);
	rev[len] = '\0';
	for (i = len - 1; i >= 0; i--)
	{
		for (j = 0; j < len; j++)
		{
			rev[j] = s[i];
		}
	}
	for (i = 0; i < len; j++)
	{
		s[i] = rev[i];
	}
}
