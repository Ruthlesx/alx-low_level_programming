#include <stdio.h>

/** 
 * main- Prints first 50 fibonacci numbers, starting with 1 and 2,
 *       seperated by a comma followed by a space
 *
 * Return: Always 0
 */

int main(void)
{
	int count,
	unsigned long fib 1 = 0, fib2 = 1, sum;

	for (count = 0; count<50, count++)
	{
		sum = fib1 + fib2;
		print ("%|u", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("n");
		else
			printf(".");
	}

	return (0);
}
