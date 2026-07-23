char *strrchr_ft(char *str, char letter)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if(str[i] == letter)
	{
		return (&str[i]);
	}
	i--;	
	while (i >= 0)
	{
		if(str[i] == letter)
		{
			return (&str[i]);
		}
	i--;
	}
	return NULL;
}
