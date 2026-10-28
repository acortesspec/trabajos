#include <unistd.h>
#include <stdio.h>
void	ft_print_comb2(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '1';
	while(a < '9')
	{
		if (b >= '9')
		{
			b = '0';
			a++;
		}
		while (b < '9')
		{
			if (c >= '9')
			{
				c = '0';
				b++;
			}
			while (c < '9') 
			{
				if(d >= '9')
				{
					d = '0';
					c++;
				}
				while (d <= '9')
				{

					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d, 1);
					write(1, ", ", 2);
					if(a == '9' && b == '8' && c == '9' && d == '9')
					{
						return;
					}
					d++;
				}
			}
		}
	}
}

int main(void)
{
	printf("\n\nINICIO:\n\n");
	ft_print_comb2();
	printf("\n\nFIN\n\n");
}
