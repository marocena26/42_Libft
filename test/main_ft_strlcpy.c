#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int main (void)
{
    char dest[] = "gffdhxr";
    char src[] = "hgdxg<tdhzyjrrya";
    size_t len = 7;
	
    printf("este es el string dest === '%s'\n", dest);
    printf("este es el string src === '%s'\n", src);
    ft_strlcpy( dest,  src, len);
    int result = ft_strlcpy( dest,  src, len);
    printf("este es el string dest ft_strlcpy === '%d'\n", result);
   char dest1[] = "gffdhxr";
    char src1[] = "hgdxg<tdhzyjrrya";

      printf("este es el string dest === '%s'\n", dest1);
    printf("este es el string src === '%s'\n", src1);
    strlcpy( dest1,  src1, len);
    int res = strlcpy( dest1,  src1, len);
  
    printf("este es el string res strlcpy === '%d'\n", res);

    return (0);
}