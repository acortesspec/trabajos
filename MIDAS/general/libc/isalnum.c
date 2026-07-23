int isalnum_ft(int c)
{
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
		return 1;
	}
	return 0;
}
