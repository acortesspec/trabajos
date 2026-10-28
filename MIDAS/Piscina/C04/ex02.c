#include <stdio.h>
#include <unistd.h>
void ft_putnbr(int nb)
{	
	int i = 0;
	long long int multp = 1;
	int rest;
	int temp;
	char number;
	if(nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	while(nb > multp)
	{	
		multp = multp * 10;
	}
	while(multp > 0)
	{
		temp = nb / multp;
		nb = nb % multp;
		multp = multp / 10;
		number = temp + 48;
		write(1, &number, 1);
	}	
}

int main(void)
{
	ft_putnbr(-2147483647);	
	return 0;
}
