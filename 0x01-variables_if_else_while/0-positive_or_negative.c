#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative"
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");
	printf("\n");
	return (0);
}
