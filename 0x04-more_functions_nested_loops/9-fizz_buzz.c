#include <stdio.h>
/**
 * main - print number 1 to 100
 *
 * Return: 0.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			if (x == 100)
				printf("FizzBuzz");
			else
				printf("FizzBuzz ");
			continue;
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (x % 5 == 0)
		{
			if (x == 100)
				printf("Buzz");
			else
				printf("Buzz ");
			continue;
		}
		printf("%d ", x);
	}
	printf("\n");
	return (0);
}
