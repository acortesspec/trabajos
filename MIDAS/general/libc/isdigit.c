#include <stdio.h>
int isdigit_ft(int c)
{
	if(c >= '0' && c <= '9')
	{
		return 1;
	}
	return 0;
}
