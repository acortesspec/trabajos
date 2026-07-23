#include <stdio.h>
#include <string.h>
#include <unistd.h>
void ft_mayuls(char *str)
{
	int i;
	int n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || (str[i] < '\0'))))
		{
			n = 0;
		}
		else if(n == 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			n = 1;
		}	
		else if (n == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			n = 1;
		}
		else if (n == 1 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
	       		n = 1;	
		}
		else if(str[i] >=0 && str[i] <=9)
		{
			n = 1;
		}	
		write(1, &str[i], 1);
		i++;
		
	}

}

int main(void)
{
	printf("Escribe la frase a continuacion\n");
	char frase[200];
	fgets(frase, sizeof(frase), stdin);
	printf("\nRESPUESTA:\n\n");
	printf("\n\n--------------------------------------------------------------------\n\n");
	ft_mayuls(frase);
	printf("\n--------------------------------------------------------------------\n");
	return 0;
}
