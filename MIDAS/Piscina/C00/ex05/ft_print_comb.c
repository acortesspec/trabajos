#include <unistd.h>
#include <stdio.h>
void ft_print_comb(void)
{
	char a = '0';
	char b = '1';
	char c;
	while(a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{	
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if((a == '7' && b == '8' && c == '9'))
				{
					return;
				}
				write(1, ",", 1);
				write(1, " ", 1);		
			c++;
			}
		b++;
		}
	a++;
	}
}

int main(void)
{
	printf("\n\nINICIAR:\n\n");
	ft_print_comb();
	printf("\n\n-FIN-\n");
	return 0;
}
