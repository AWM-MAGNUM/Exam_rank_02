#include<unistd.h>
void	ft_putnbr(int n)
{
	char nb;
	
	if(n >= 10)
		ft_putnbr(n /10);
	nb = (n % 10) + 48;
	write(1,&nb,1);
}
int	main(int argc,char **argv)
{
	(void)argv;
	
	ft_putnbr(argc -1);
	write(1,"\n",1);
	return(0);
		
}
