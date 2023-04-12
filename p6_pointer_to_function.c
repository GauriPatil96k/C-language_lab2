#include <stdio.h>
void test() 
{
 return ;
}
int main() 
{
 int a = 5;
 printf("Address of variable = %p\n", &a); 
 printf("Address of a function = %p", test);
 return 0;
}

