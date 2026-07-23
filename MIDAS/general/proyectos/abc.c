#include <stdio.h>
#include <string.h>                                                                                    
#include <unistd.h>   
void print_alfabet1(void)
{
	char puta = 'a';
	while(puta <= 'z')
	{
		write(1, &puta, 1);
		puta++;
	}

}

void print_alfabet2(void)
{
	char puta = 'z';
	while(puta >= 'a')
	{
		write(1, &puta, 1);
		puta--;
	}
	
}


int main(void)
{
	char respuesta[10];
	printf("¿abecedario acendiente(1) o descendiente(2)?");
	scanf("%9s", respuesta);
	if (strcmp(respuesta, "1") == 0)
	{
		print_alfabet1();
		return 0;
	}
	else if(strcmp(respuesta, "2") == 0)
	{
		print_alfabet2();
		return 0;
	}
	else
	{
		printf("\nTu eres gilipollas\n");
		return 0;
	}
}
