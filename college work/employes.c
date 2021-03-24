#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char department;
    char name[34];
}samarth;

int main()
{
    printf("enter your employee id");
   scanf("%d",&samarth.id);
   strcpy("dep1",&samarth.department);
   strcpy("samarth ahuja",&samarth.name);
   return 0;
}
