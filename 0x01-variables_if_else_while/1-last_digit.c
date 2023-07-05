#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks 5 6 and 0
 *
 * Decription - checks if the number is less than 6 or 0
 *
 * Return: 0 if success non-zero if failure
 */
int main(void)
{
	int n,j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j=abs(n)%10;
	if(j>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",n,j);
	}
	else if(j==0)
	{
		printf("Last digit of %d is %d and is 0\n",n,j);
	}
	else if(j<6 && j!=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n,j);
	}
	
	return (0);
}
