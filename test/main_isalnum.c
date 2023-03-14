#include<stdio.h>
#include <ctype.h>

int isalnum(int c);
int	main(void)
{
	int	c;
	
	c = '-?fgd2';
	isalnum(c);
	printf("%d", isalnum(c));
}