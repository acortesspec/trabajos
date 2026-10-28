#include <stdio.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(void)
{
	char str[100] = "1234";
	printf("\nRESPUESTA: %d\n", ft_strlen(str));
	return 0;
}
