#include<stdio.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}
char    *ft_strrev(char *str)
{
	int i = 0;
	int j ; 
 	char temp ;
	
	j = ft_strlen(str) - 1;
	
	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp ;
		i++;
		j--;
	}
	return(str);
}
/*
int	main()
{
	char str[] = "FBITERMINAL";
	printf("%s",ft_strrev(str));
}
*/
