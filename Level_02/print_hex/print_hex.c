#include<unistd.h>
int	ft_atoi(char *str)
{
	int i = 0;
	int res= 0;
	int signe = 1;
	while(str[i] == ' ' ||( str[i] >= 9 && str[i] <= 13))
	{
		if(str[i] == '-')
			signe = -1 ;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res += str[i] - 48;
		i++;
	}
	return(res * signe);
}
void	print_hex(int n)
{
	char str[] = "0123456789abcdef";
	
	if(n >= 16)
		print_hex(n / 16);
	write(1,&str[n % 16],1);
}
int	main(int argc, char **argv)
{
	if(argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1,"\n",1);
}

