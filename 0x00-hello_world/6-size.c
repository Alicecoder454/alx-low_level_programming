#include <stdio.h>
/**
 * prints the size of  many var types
 *
 * return is always 0
 */
int main(void)
{
   char a;
   int b;
   long int c;
   long long int d;
   float e;

   printf("Size of char: %d bytes(s) \n", sizeof(a)); 
   printf(“Size of int: %d bytes(s) \n”, sizeof(b));
   printf(“Size of long int: %d bytes(s) \n”, sizeof(c));
   printf(“Size of long long int: %d bytes(s) \n”, sizeof(d));
   printf(“Size of float: %d bytes(s) \n”, sizeof(e));
   return (0);
}  
