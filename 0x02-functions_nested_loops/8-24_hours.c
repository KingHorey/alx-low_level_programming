#include "main.h"
#include <stdio.h>
/**
 * jack_bauer- function prints the time in 24hours
 */

void jack_bauer(void)
{
	unsigned short int hh;
	unsigned short int mm;

	for (hh = 00 ; hh < 24; hh++)
	{
		for (mm = 00; mm < 60; mm++)
		{
			if ((hh <= 10) && (mm < 10))
			{
				printf("%02d:%02d\n", hh, mm);
			}
			else if ((hh <= 10) && (mm >= 10))
			{
				printf("%02d:%02d\n", hh, mm);
			}
			else if ((hh > 10) && (mm < 10))
			{
				printf("%d:%02d\n", hh, mm);
			}
			else
			{
				printf("%d:%d\n", hh, mm);
			}
		}
	}
}

