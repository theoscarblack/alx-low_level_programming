#include <stdlib.h>

#include <time.h>

#include <stdio.h>/* more headers goes there */
/**
 *This program tells whether a number is positive, zero or negative.
 *
 */
/* betty style doc for function main goes there */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of ");

	if (n % 10 > 5)
	{
		printf("%d is ", n);
		printf("%d and is greater than 5\n", n % 10);
	} /* your code goes there */
	else if (n % 10 == 0)
	{
		printf("%d is ", n);
		printf("%d and is 0\n", n % 10);
	}
	else
	{
		printf("%d is ", n);
		printf("%d and is less than 6 and not 0\n", n % 10);
	}
	return (0);

}
