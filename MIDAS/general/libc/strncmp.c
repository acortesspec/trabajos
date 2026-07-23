int strncmp_ft(char *str1, char *str2, int n)
{
	int i = 0;
	while(i <= n && str1[i] != '\0')
	{
		if(str1[i] != str2[i])
		{
			return str1[i] - str2[i];
		}
	i++;
	}
	return 0;
}

