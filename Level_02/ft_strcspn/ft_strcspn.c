#include<stdio.h>
size_t  ft_strcspn(const char *s, const char *reject)
{
	int i ;
	int j ;
	
	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0; reject[j] != '\0';j++)
		{
			if(s[i] == reject[j])
			{
				return(i);
			}
		}
	}
	return(i);
}
int	main()
{
	char to[] = "FBITERMINAL";
	char ro[] = "ER";
	int toto = ft_strcspn(to,ro);
	printf("%d",toto);
}
