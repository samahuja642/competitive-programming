#include<stdio.h>
int main()
{
    struct datesheet{
        int mathematics;
        int physics;
        int chemistry;
        }p1,p2,p3,p4,p5;
    
    
        printf("enter your marks in mathematics");
        scanf("%d",&p1.mathematics);
        printf("enter your marks in physics");
        scanf("%d",&p1.physics);
        printf("enter your marks in chemistry");
        scanf("%d",&p1.chemistry);

        printf("enter your marks in mathematics");
        scanf("%d",&p2.mathematics);
        printf("enter your marks in physics");
        scanf("%d",&p2.physics);
        printf("enter your marks in chemistry");
        scanf("%d",&p2.chemistry);

        printf("enter your marks in mathematics");
        scanf("%d",&p3.mathematics);
        printf("enter your marks in physics");
        scanf("%d",&p3.physics);
        printf("enter your marks in chemistry");
        scanf("%d",&p3.chemistry);

        printf("enter your marks in mathematics");
        scanf("%d",&p4.mathematics);
        printf("enter your marks in physics");
        scanf("%d",&p4.physics);
        printf("enter your marks in chemistry");
        scanf("%d",&p4.chemistry);

        printf("enter your marks in mathematics");
        scanf("%d",&p5.mathematics);
        printf("enter your marks in physics");
        scanf("%d",&p5.physics);
        printf("enter your marks in chemistry");
        scanf("%d",&p5.chemistry);
    
printf("average of p1 is %d\n",(p1.mathematics+p1.chemistry+p1.physics)/300);
printf("average of p2 is %d\n",(p2.mathematics+p2.chemistry+p2.physics)/300);
printf("average of p3 is %d\n",(p3.mathematics+p3.chemistry+p3.physics)/300);
printf("average of p4 is %d\n",(p4.mathematics+p4.chemistry+p4.physics)/300);
printf("average of p5 is %d\n",(p5.mathematics+p5.chemistry+p5.physics)/300);
    return 0;
}