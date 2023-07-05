#include <stdio.h>

/**
 * main - prints sizes of variables
 *
 * Description - Prints the size of variables on the architecture
 *
 * Return: 0 on success, non-zero on failure.
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	
	printf("Size of char: %ld byte(s) \n", (unsigned long)sizeof(c));
       	printf("Size of int: %ld byte(s) \n", (unsigned long)sizeof(i));
	printf("Size of long int: %ld byte(s) \n", (unsigned long)sizeof(li));
	printf("Size of long long int: %ld byte(s) \n", (unsigned long)sizeof(lli));
	printf("Size of float: %ld byte(s) \n", (unsigned long)sizeof(f));

	return (0);	
}
