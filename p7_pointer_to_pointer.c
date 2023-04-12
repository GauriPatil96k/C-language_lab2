#include <stdio.h> 
int main () 
{
 int var;
 int *ptr;
 int **pptr;
 var = 3000;
 ptr = &var;
 pptr = &ptr;
 printf("Value of var = %d\n", var );
 printf("Value available at *ptr = %d\n", *ptr );
 printf("Value available at **pptr = %d\n", **pptr);
 return 0;
}

