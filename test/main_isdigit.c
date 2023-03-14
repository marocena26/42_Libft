#include<stdio.h>
int	ft_isdigit(int c);
int	main(void)
{
	int	c;
	
	c = '2';
	ft_isdigit(c);
	printf("%d", ft_isdigit(c));
}