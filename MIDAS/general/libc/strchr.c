char *strchr_ft(char *str, char letter)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == letter)
		{
			return (&str[i]);
		}
	i++;	
	}
	if(str[i] == letter)
	{
		return (&str[i]);
	}
	return NULL;
}
