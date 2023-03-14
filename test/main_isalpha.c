#include<stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);
int	main(void)
{
	int	c;
	
	c = '2';
	ft_isalpha(c);
	printf("%d", ft_isalpha(c));
}