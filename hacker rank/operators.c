#include<stdio.h>
#include<math.h>
int main()
{
    double mealcost=0;
    scanf("%lf",&mealcost);
    int tippercent=0;
    scanf("%d",&tippercent);
    int taxpercent=0;
    scanf("%d",&taxpercent);
    float extra=(taxpercent+tippercent)*mealcost/100;
    int totalcost=round(mealcost+extra);
    printf("%d",totalcost);
    return 0;
}