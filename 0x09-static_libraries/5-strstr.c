#include "main.h"

/**
 * _strstr - clone of strstr
 *
 * @haystack: string
 * @needle: string to be checked for occurance
 *
 * Return: beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
