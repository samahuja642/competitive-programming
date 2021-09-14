#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int y=0;y<t;y++)
    {
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
        
            int questions_score[k];
        for(int i=0;i<k;i++)
        {
            scanf("%d",(questions_score[i]));
        }
        int  student_attempted[n][k];
        for(int i=0;i<n;i++)

        {
            for(int j=0;j<k;j++)
            {
            scanf("%d",student_attempted[i][j]);

            }
        }
        int total_marks[n];
        for(int i=0;i<n;i++)
        {
            total_marks[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
            total_marks[i]=(questions_score[i] * student_attempted[i][j]);

            }
        }
        
        for(int i=0;i<n;i++)
        {
            printf("%d\n",total_marks[i]);
        }
    }
    return 0;
}