#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,T2,T3,T4;
    printf("enter number of pizzas\n");
    scanf("%d %d %d %d",&m,&T2,&T3,&T4);
    struct pizzas
    {
        int number_of_ingredients;
        
    }pizza[m];
    for(int i=0;i< m;i++)
    {
    printf("enter number of ingredients\n");
    scanf("%d",&pizza[i].number_of_ingredients);
    
    char ingredients[pizza[i].number_of_ingredients];
    

    for(int j=0;j<pizza[i].number_of_ingredients;j++)
    {
        scanf("%s",&ingredients[j]);
    }
    }
    return 0;
}