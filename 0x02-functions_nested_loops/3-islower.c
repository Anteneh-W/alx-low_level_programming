#include "main.h"
/**
 * _islower - entry
 * checks for lowercase character
 * @c: the integer value
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
