#include <stdio.h>
#include <unistd.h>
void ft_putnbr(int nb)
{	
	char str[12];
	int i = 1;
	int resto;
	int divisor = 10;
	if(nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		if(nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		while(nb != 0)
		{
			resto = nb % divisor;
			nb = nb /= divisor;
			str[i] = resto + 48;
			i++;
		}
		while(i > 0)
		{
			i--;
			write(1, &str[i], 1);
		}
	}
}

int main(void)
{	
	printf("\nRESPUESTA:\n\n");
	ft_putnbr(-34123523);
	printf("\n\n\n");
	return 0;
}
