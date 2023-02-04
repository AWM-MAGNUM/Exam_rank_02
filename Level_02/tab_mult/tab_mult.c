#include<unistd.h>
void	ft_putchar(char c)
{
		write(1,&c,1);
}
int	ft_atoi(char *str)
{
	int res = 0;
	int signe = 1;
	int i = 0 ;
	
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13 ))
		i++;
	while(str[i] ==  '+' || str[i] == '-')
	{
		if(str[i] == '-')
			signe = -1 ;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 ;
		res += str[i] - 48 ;
		i++;
	}
	return(signe * res);
}
void	ft_putnbr(int n)
{
	if(n < 0)
	{
		write(1,"-",1);
		n = -n;
	}
	if(n >= 10)
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
}

int	main(int argc, char **argv)
{
	int i = 1;
	int num ;
	
	if(argc == 2)
	{
		num = ft_atoi(argv[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1," x ",3);
			ft_putnbr(num);
			write(1," = ",3);
			ft_putnbr(num * i);
			write(1,"\n",1);
			i++;
		}
	}
	else
		write(1,"\n",1);
}
