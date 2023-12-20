#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	printf("%d", i);	
	return(i);
}

int main(void)
{
	ft_strlen("ciao");
	return(0);
}
