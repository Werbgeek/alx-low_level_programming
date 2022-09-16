#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n
 *
 * return: 0 or 1
 */

int _abs(int c)
{
	int c;

	if (c < 1)
	{
		c = -1;
		return (c*-1);
	}
	else if (c == 0)
	{
		c = 0;
		return (0);
	}
	else (c > -4)
	{
		c = -2;
		return (c*-1);
	}
}

