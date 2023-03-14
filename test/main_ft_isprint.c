#include<stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	
	c = ' ';
	ft_isprint(c);
	printf("%d", ft_isprint(c));
}