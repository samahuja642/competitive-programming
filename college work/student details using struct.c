#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    struct student
    {
        int roll;
        int year;
        char name;
        char branch;
        
    }samarth;
    
    printf("enter your roll number\n");
    scanf("%d",&samarth.roll);
    printf("in which year you are in?\n");
    scanf("%d",&samarth.year);
    
    
    strcpy(samarth.name,"samarth");
    printf(" your name is %s",samarth.name);
    
   
    strcpy(samarth.branch,"Aiml");
     printf("%s branch you are in",samarth.branch);
   
    
    
    return 0;
}
//int main()
//
//{
//
// structure hotel
//
//{
//
// int items;
//
//char name[10];
//
//}a;
//
//strcpy(a.name, "TAJ");
//
//a.items=10;
//
//printf("%s", a.name); return 0;
//
// }