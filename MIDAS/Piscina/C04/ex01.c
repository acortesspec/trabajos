#include <unistd.h>
#include <stdio.h>
void	ft_putnbr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char str[100] = "Hola_Buenas Tardes. puta=)";
	printf("\nINICIANDO:\n");
	ft_putnbr(str);
	printf("\n\n");
	return 0;
}
