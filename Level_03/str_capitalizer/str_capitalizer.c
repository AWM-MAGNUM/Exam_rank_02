#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	s;

	i = 0;
	s = 1;
	if(ac <= 1)
	{
		write(1, "\n", 1);
		return(0);
	}

	while(av[s])
	{
		while(av[s][i])
		{
			if((av[s][i] >= 97 && av[s][i] <= 122) && av[s][i - 1] <= 32)
				av[s][i] -= 32;
			else if((av[s][i] >= 65 && av[s][i] <= 90) && av[s][i - 1] > 32)
				av[s][i] += 32;
			write(1, &av[s][i], 1);
			i++;
		}
		i = 0;
		s++;
		write(1, "\n", 1);
	}
}