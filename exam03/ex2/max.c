int max(int *tab, unsigned int len)
{
	int max;
	unsigned int i = 0;
	if(len)
	{
		max = arr[0];
		while(i < len)
		{
			if(arr[i] > max)
				max = tab[i];
			i++;
		}
		return(max);
	}
	else
		return(0);
}
