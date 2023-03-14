#include<stdio.h>
#include <ctype.h>

int ft_isalnum(int c);
int	main(void)
{
	int	c;
	
	c = '*';
	ft_isalnum(c);
	printf("%d", ft_isalnum(c));
}