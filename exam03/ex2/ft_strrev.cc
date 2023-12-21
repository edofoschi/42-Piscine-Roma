char *ft_strrev(char *str)
{
	int i;
	int len = 0;
	char tmp;
	while(str[len])
		len++;
	i = -1;
	while(++i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return(str);
}
