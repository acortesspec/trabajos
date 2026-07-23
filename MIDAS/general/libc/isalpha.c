#include <stdio.h>
#include <unistd.h>
int isalpha_ft(int a)
{
	if((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		return 1;
	}
	return 0;
}
