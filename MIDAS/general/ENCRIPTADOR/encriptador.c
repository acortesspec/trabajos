#include <stdio.h>
#include <unistd.h>
#include <string.h>
void encript_ft(char *mensaje, char *codigo)
{
	int i = 0;
	int j = 0;
 	char numero;
	while(mensaje[i] != '\0')
	{
		if(!((mensaje[i] > '!' && mensaje[i] < '~')))
		{
			i++;
		}
		else
		{
			numero = codigo[j] - 48;
			mensaje[i] = mensaje[i] - numero;
			i++;
			j++;
			if(codigo[j] == '\0')
			{
				j = 0;
			}
		}
	}
}

void unencript_ft(char *mensaje, char *codigo)
{
	int i = 0;
	int j = 0;
	char numero;
	while(mensaje[i] != '\0')
	{
		if(!((mensaje[i] > '!' && mensaje[i] < '~'))) 
		{
			i++;
		}
		else
		{
			numero = codigo[j] - 48;
			mensaje[i] = mensaje[i] + numero;
			i++;
			j++;
			if(codigo[j] == '\0')
			{
				j = 0;
			}
		}
	}
}      


int main(void)
{
	char codigo[100];
	char mensaje[1000];
	char respuesta[10];
	printf("\nBienvenido a tu encriptador de confianza pringao.\n\nPara encriptar escribe [1]\nPara desencriptar escribe [2]\n");
	fgets(respuesta, sizeof(respuesta), stdin);
	respuesta[strcspn(respuesta, "\n")] = '\0';
	if(strcmp(respuesta, "1") == 0)
	{
		int i
		printf("Escribe un codigo de 10 numeros, el cual se usara para encriptar y desencriptar tu mensaje.\n");
		fgets(codigo, sizeof(codigo), stdin);
		while(codigo[i] != '\0')
		{
			i++;
		}
		if(i <= 11)
		{
			printf("Perfecto, ahora escribe el mensaje que quieras encriptar\n");
			fgets(mensaje, sizeof(mensaje), stdin);
			codigo[strcspn(codigo, "\n")] = '\0';
			mensaje[strcspn(mensaje, "\n")] = '\0';
			encript_ft(mensaje, codigo);
			printf("TU CODIGO ENCRIPTADO:\n\n");
			printf("%s\n", mensaje);
			printf("\n\nTU CODIGO SECRETO:\n\n");
			printf("%s\n", codigo);
			printf("\n\n");
		}
		else
		{
			printf("Tu eres gilipollas");
		}
	}
	else if(strcmp(respuesta, "2") == 0)
	{
		printf("\nEscribe tu codigo de desencriptado.\n");
		fgets(codigo, sizeof(codigo), stdin);
		printf("\nPerfecto, ahora escribe el mensaje que quieras desencriptar.\n");
		fgets(mensaje, sizeof(mensaje), stdin);
		codigo[strcspn(codigo, "\n")] = '\0';
		mensaje[strcspn(mensaje, "\n")] = '\0';
		unencript_ft(mensaje, codigo);
		printf("TU CODIGO DESENCRIPTADO:\n\n");
		printf("%s\n", mensaje);
		printf("\n\n");
	}
	else
	{
		printf("\nNo reconocido, escribiste; '%s'\n", respuesta);
	}
	return 0;
}
