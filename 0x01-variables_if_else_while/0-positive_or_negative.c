#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - checks whether number is negative or positive
 *
 * Description - checks positie nagative and zero
 *
 * Return: 0 if success non-zero if failure
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive",n);
	} 
	else if (n==0)
	{
		printf("%d is zero",n);	
	}
	else 
	{
		printf("%d is negative",n);
	}

	return (0);
}
