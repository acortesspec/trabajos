#include <unistd.h>
void ft_print_numbers()
{
	for(char num = '0'; num <= '9'; num++)
	{
		write(1, &num, 1);
	}
}

int main(void)
{
	ft_print_numbers();
	return 0;
}
