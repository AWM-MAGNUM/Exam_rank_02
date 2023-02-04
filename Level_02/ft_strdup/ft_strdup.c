#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int i =0;
	while(str[i])
		i++;
	return(i);
}
char    *ft_strdup(char *src)
{
	char *str;
	int i = 0;
	
	str = malloc(sizeof(char) * (ft_strlen((char *)src) + 1));
	if(!str)
		return(NULL);
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}
/*
int main()
{
	printf("%s",ft_strdup("FBITERMINAL"));
}
*/	
