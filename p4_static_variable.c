#include <stdio.h>
void func(void); 
static int count = 5; 
main() 
{
 while(count--) {
 func();
 }
 return 0;
}
void func( void ) 
{
 static int i = 5; 
 i++;
 printf("i is %d and count is %d\n", i, count);
}

