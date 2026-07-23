#include <unistd.h> 
void ft_print_alphabet(void)
{
	char puta;
	puta = 'z';
	while (puta >= 'a')
	{
		write(1, &puta, 1);
		puta--;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
