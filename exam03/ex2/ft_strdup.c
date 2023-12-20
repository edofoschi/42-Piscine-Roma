#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *dest;
	int size = 0;
	int i = 0;

	while(src[size])
		size++;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if(dest == NULL)
		return(NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
