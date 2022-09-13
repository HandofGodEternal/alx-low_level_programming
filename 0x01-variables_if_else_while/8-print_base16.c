#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
char y;

for (y = '0'; y <= '9'; ++y)
putchar(y);
for (y = 'a'; y <= 'f'; ++y)
putchar(y);

putchar('\n');

return (0);
}
