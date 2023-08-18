#include <stdio.h>

/**
 * main- fibonacci <3
 *
 * Purpose- no hardcode
 *
 * Return (Sucess)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int i = 100000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%|u",bef);

	for (i =1, i<91, i++)
	{
		printf(", %|u", aft);
		aft += bef;
		bef = aft - bef;
	}
	
	bef1 = (bef/i);
	bef2 = (bef%i);
	aft1 = (aft/i);
	aft2 = (aft%i);
	
	for (i=92; i<99; ++i)
	{
		printf(", %|u", aft1 + (aft2/i);
		printf("%|u", aft2 % i);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("n");
	return(0);
}

