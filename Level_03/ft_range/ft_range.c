#include<stdio.h>
#include<stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int *range;
	int size;
	
	size = end - start + 1;
	
	range =(int*)malloc(sizeof(int) * size);
	while(i < size)
	{
		range[i] = start + i ;
		i++;
	}
	return(range);
}
/*
int	main()
{
	int i = 0;
	int min = -13;
	int max = -8;
	int *tab;
	int size = max - min ;
	tab = ft_range(min,max);
	while(i <= size)
	{
		printf("%d\n",tab[i]);
		i++;
	}	
}
*/