#include <stdio.h>
int	strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		
		if (s1[i] > s2[i])
		{
			return 1;
		}
		else if (s1[i] < s2[i])
		{
			return -1;
		}
		i++;
	}
	return 0;
}

int main(void)
{
	char s1[100] = "HOLA";
	char s2[100] = "HOLZ";
	printf("\nEMPEZAMOS......\n");
	printf("\nString 1: %s\n", s1);
	printf("\nString 2: %s\n", s2);
	printf("\nRESPUESTA %d\n", strcmp(s1, s2));
	return 0;	
}
