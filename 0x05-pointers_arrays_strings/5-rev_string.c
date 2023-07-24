#include "main.h"
#include <string.h>

/**
 * rev_string - copy the reversed string to the poiter
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, len = strlen(s);
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
