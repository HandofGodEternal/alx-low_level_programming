#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative"
 *Return: 0 (success)
 */
int main(void)
{
	int n;
	int Lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastdigit = n % 10;
	printf("Last digit of %d is %d and is ", n, Lastdigit);
	if (Lastdigit > 5)
		printf("greater than 5\n");
	else if (Lastdigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
