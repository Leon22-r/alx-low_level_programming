#include <stdlib.h>
#include <time.h>
/*more headers goes here*/
#include <stdio.h>

/**
 * main - print whether a number is positive or negative
 * Return: 0 (succees)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here */
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
