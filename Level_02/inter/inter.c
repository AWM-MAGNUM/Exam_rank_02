#include<unistd.h>
int	check_v1(char *str,char c,int len)
{
	len--;
	while(len >= 0)
	{
		if(str[len] == c)
			return(1);
		len--;
	}
	return(0);
}
int	check_v2(char *str,char c)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
	
}
int	main(int argc,char **argv)
{
	int i = 0;
	char c ;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			c = argv[1][i];
			if((check_v2(argv[2],c) == 0) && check_v1(argv[1],c,i) == 0)
				write(1,&argv[1][i],1);
			i++;
		}
	}	
	write(1,"\n",1);
}
