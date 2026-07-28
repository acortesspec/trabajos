#include <unistd.h>

void compare_ft(char *str)
{
	int i = 0;
	int new_word = 1;

	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') ||
		      (str[i] >= 'A' && str[i] <= 'Z') ||
		      (str[i] >= '0' && str[i] <= '9')))
		{
			new_word = 1;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z' && new_word == 1)
			{
				str[i] -= 32;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z' && new_word == 0)
			{
				str[i] += 32;
			}
			new_word = 0;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char str[200];
	int len;

	write(1, "Introduce un texto:\n", 18);
	len = read(0, str, sizeof(str) - 1);
	if (len <= 0)
		return 0;

	if (str[len - 1] == '\n')
		str[len - 1] = '\0';
	else
		str[len] = '\0';

	compare_ft(str);
	write(1, "\n", 1);
	return 0;
}
