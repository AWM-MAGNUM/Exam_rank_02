#include<stdio.h>
#include<stdlib.h>
int	*rrange(int start, int end)
{
	int i = 0;
	int size ;
	int *rrange;

	size = (end - start) + 1;
	if(size < 0)
		size *= -1;
	rrange = (int*)malloc(sizeof(int) * size);
	if(!rrange)
		return(NULL);
	if(end <= start)
	{
		while(end <= start)
		{
			rrange[i] = end;
			end++;
			i++;
		}
	}
	else
	{	
		while(end >= start)
		{
			rrange[i] = end;
			end--;
			i++;
		}
	}
	return(rrange);
}
/*
int	main()
{
	int i = 0;
	int min = 0;
	int max =  -3;
	int index = 0;
	int size = (max - min);
	if(size < 0)
		size *= -1;
	int *tab = rrange(min,max);
	while(size >= 0 )
	{
		printf("%d\n",tab[index++]);
		i--;
		size--;
		min--;
	}
}
*/