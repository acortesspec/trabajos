#include <stdio.h>
#include <unistd.h>
void ft_putnbr(int nb)
{
	long int count = 1;
	int temp;
	int result;
	int multp = 1;
	if(nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	temp = nb;
	while (temp > 0)
	{
		temp = temp / 10;
		count = count * 10;
	}
	count = count / 10;
	while(nb > 0)
	{
		multp = nb / count;
		nb = nb % count;
		count = count / 10;
		multp = multp + 48;
		write(1, &multp, 1);
	}

}

int main(void)
{
	printf("\n\nINICIO\n");
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483647);
	printf("\nFIN\n");
}
