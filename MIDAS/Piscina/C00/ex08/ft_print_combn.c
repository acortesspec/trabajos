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
    if(nb == 0)
    {
        write(1, "0", 1);
        return;
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


void ft_print_combn(int n)
{
    int index = 0;
    char str[n + 1];
    int i = 0;
    while(index < n)
    {
        ft_putnbr(index);
        str[i] = index + 48;
        index++;
        i++;
    }
    str[i] = '\0';
    write(1, ", ", 2);
    printf("\nstr: %s\n", str);
    while(str[n] != '9')
    {
    }

int main(void)
{
    printf("\n\nINICIO\n");
    ft_print_combn(9);
    write(1, "\n", 1);
    printf("\nFIN\n");
    return 0;
}