#include<unistd.h>
#include<stdio.h>
int	    is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	while(n % 2 == 0)
		n= n / 2;
	return n ==  1;
}
int	main()
{
    printf("%d\n", is_power_of_2(0));  // Affiche 0
    printf("%d\n", is_power_of_2(1));  // Affiche 1
    printf("%d\n", is_power_of_2(2));  // Affiche 1
    printf("%d\n", is_power_of_2(3));  // Affiche 0
    printf("%d\n", is_power_of_2(4));  // Affiche 1
    printf("%d\n", is_power_of_2(5));  // Affiche 0
    printf("%d\n", is_power_of_2(8));  // Affiche 1

    return 0;
}
