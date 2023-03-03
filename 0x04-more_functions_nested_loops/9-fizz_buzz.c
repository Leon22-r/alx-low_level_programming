#include <stdio.h>
/**
 * main - prints from 1 to 100 and replaces multiples
 *		of 3 and 5 with fizz and buzz respectively
 *		and multiples of both are replaced by fizzbuzz
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}
