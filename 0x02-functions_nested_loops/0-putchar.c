#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 8)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
