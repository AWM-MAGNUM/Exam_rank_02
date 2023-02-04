#include<stdlib.h>

int     ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int signe = 1;
	
	while(str[i] == ' ' ||(str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == '+' || str[i] == '-' )
	{
		if(str[i] == '-')
			signe = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
	return(signe * res);
}
