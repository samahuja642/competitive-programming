#include<stdio.h>
int main()
{
    struct time{
        int day;
        int month;
        int year;
    }p1,p2;
    scanf("%d",&p1.day);
    scanf("%d",&p2.day);
    scanf("%d",&p1.month);
    scanf("%d",&p2.month);
    scanf("%d",&p1.year);
    scanf("%d",&p2.year);
if(p1.day==p2.day & p1.month==p2.month & p1.year==p2.year)
printf("dates are equal");
else
{
    printf("dates are not equal");
}

return 0;
}