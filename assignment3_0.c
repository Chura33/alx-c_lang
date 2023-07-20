/**
 * the instruction is to write a script that
 * prints all the odd numbers from 1-100
 */

#include <stdio.h>
void main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 =! 0)
		{
			print("%d\n", i)
		}
	}
}

/**
 * "i" will begin with 1 (the 1st odd number) and will end with a number
 * less than or equal to 100
 * it will be a number that when divided by 2
 * will have a remainder that is NOT zero
 * and will keep incrementing
 */
