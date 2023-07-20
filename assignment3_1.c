/**
 * script that prints all even numvers from 0-100
 */

#include <stdio.h>
void main(void)
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			print("%d\n", i);
		}
	}
}
