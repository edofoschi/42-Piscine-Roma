#include <unistd.h>

int ft_atoi(const char *str)
{
	int res = 0;
	int sign = 1;
	while(*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign = -1;
		s++;
	}
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return(res * sign);
}
