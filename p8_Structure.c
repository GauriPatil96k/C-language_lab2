#include <stdio.h>
#include <string.h>
struct Person
 {
 char name[50];
 int citNo;
 float salary;
} person1;
int main() 
{
 strcpy(person1.name, "John willsburg");
 person1.citNo =1984;
 person1. salary = 8000;
 printf("Name: %s\n", person1.name);
 printf("Citizenship No.: %d\n", person1.citNo);
 printf("Salary: %.2f", person1.salary);
 return 0;
}

