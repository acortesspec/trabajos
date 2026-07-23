#include <unistd.h>
void capitalaicer(char *str)
{
	int i = 0;
	int new = 1;
	while(str[i] != '\0')
	{
		if(!(((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z')||(str[i] >= '0' && str[i] <= '9'))))
		{
			new = 1;	
		}
		else
		{
			if(str[i] >= 'a' && str[i] <= 'z' && new == 1)
			{
				str[i] = str[i] - 32;

			}
			else if(str[i] >= 'A' && str[i] <= 'Z' && new == 0)
			{
				str[i] = str[i] + 32;
			}
			new = 0;
		}
		write(1, &str[i], 1);
		i++;
	}	
}

int main(void)
{
	write(1, "INICIANDO:", 9);
	write(1, "\n", 1);
	char str[] = "En uN luGar de la MAncH4, de cuYo nOmBre no quieRo acoRdArMe,\n"
	             "no hA cOmO mucHo tieMpO quE viVíA un hIdAlgO de loS de\n"
		     "lAnDa eN asTiLlEro, adArGa anTiGuA, roCiO rAco y gAlgO\n"
		     "coRrEdOr. UnA oLlA de alGo mAs vaCiA quE cArNe, sAlpiCoN sEcO\n"
		     "lAs mAs nOcHes, duElOs y queBrAnT0s lOs saBaDos, lAnTejAs\n"
		     "lOs viErNes, queBrAdillOs lOs dOmInGoS, coNsUmIaN lAs tReS\n"
		     "pArTes de sU hAciEndA. El rEsT0 de eLlA coNfUiA sAyO de\n"
		     "vElArTe, cAlzAs de vEllUdO pArA lAs fiEsTAs coN sUs\n"
		     "pAnTuflOs de lO miSmO, y lOs dias de eNtrEsEmAnA sE\n"
		     "hOnrAbA coN sU alfAnDa de lO mAs fInO.\n";
	capitalaicer(str);
	write(1, "\n", 2);
	return 0;	
}
