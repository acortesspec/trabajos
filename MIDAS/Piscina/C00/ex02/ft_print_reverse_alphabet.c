#include <unistd.h>
voif ft_print_reverse_alphabet(void)
{
	char ralpha;
	ralpha = 'z';
	while (ralpha >= 'a')
	{
		write(1, &ralpha, 1);
		ralpha++;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
