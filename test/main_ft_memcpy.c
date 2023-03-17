int main (void)
{
  const char src[50] = "http://www.tutorialspoint.com";
   char dest[50] = "Heloooo!!";
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 7);
   printf("After memcpy dest = %s\n", dest);
   
  

 const char src2[50] = "http://www.tutorialspoint.com";
   char dest2[50] = "Heloooo!!";
   printf("Before memcpy dest = %s\n", dest2);
   ft_memcpy(dest2, src2, 7);
   printf("After memcpy dest = %s\n", dest2); 
   
 return(0);
}