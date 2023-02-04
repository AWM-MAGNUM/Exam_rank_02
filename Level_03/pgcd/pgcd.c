#include<stdio.h>
#include<stdlib.h>
int	pgcd(int a, int b)
{
	if(b == 0)
		return(a);
	return pgcd(b, a % b);
}
int	main(int argc,char **argv)
{
	if(argc != 3)
	{
		printf("\n");
		return(0);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("%d\n",pgcd(a,b));
}
