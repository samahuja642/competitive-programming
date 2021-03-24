#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, T2, T3, T4;
    printf("enter number of pizzas\n");
    scanf("%d %d %d %d", &m, &T2, &T3, &T4);
    struct pizzas
    {
        int number_of_ingredients;
    } pizza[m];
    for (int i = 0; i < m; i++)
    {
        printf("enter number of ingredients\n");
        scanf("%d", &pizza[i].number_of_ingredients);

        char ingredients[pizza[i].number_of_ingredients];

        for (int j = 0; j < pizza[i].number_of_ingredients; j++)
        {
            scanf("%s", &ingredients[j]);
        }
    }
    // 5 1 2 1
    // 3 onion pepper olive
    // 3 mushroom tomato basil
    // 3 chicken mushroom pepper
    // 3 tomato mushroom basil
    // 2 chicken basil

    // procedure
    //  check if any two pizzas have same ingredients then see how many teams are there and also read how many teams are there as number of member specific
    // lets also discuss input from second one
    // there are 500 pizzas and if they have to give it to all then we will require 550 pizzas and since we want more different ingredients (just looking straight forward once) we will have to not giving the pizzas to 12 teams of 4members which we have recovered 48 pizzas then 2 more from 2 member team.
    int teamswhogotpizza_deleivered;
    if(m>(T2*2+T3*3+T4*4))
    {
        
        int extra=m-(T2*2+T3*3+T4*4);
        if(extra%2!=1)
        {
        teamswhogotpizza_deleivered=m-(extra/4)*4-((extra%4)/3)*3-(((extra%4)%3)/2)*2;
        }
        else
        {
            
        }
    }
    return 0;
}