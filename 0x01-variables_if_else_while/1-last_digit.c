#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
if (ld > 5)
{	
	printf("last digit of %i is %i and it is greater than 5", n, ld);
	else if (ld == 0)
		printf("last digit of %i is %i and it is 0 ", n, ld);
	else
		printf("last digit of %i is %i and it is less than 6 and not 0", n, ld);
}
return (0);
}