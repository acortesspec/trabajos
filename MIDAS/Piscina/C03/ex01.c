int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	if (i == n)
	{
		return 0;
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] > s2[i])
		{
			return 1;
		}
		else if (s1[i] < s2[i])
		{
			return -1;
		}
		i++;
	}
	return 0;
}
