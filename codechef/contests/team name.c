#include <stdio.h>
int main(){
    int t, n;
    int repeating=1;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        char s[n][21];
        for(int j = 0; j < n; j++)
        {
            scanf("%s", s[j]);
        }
        char first[n];
        for(int j = 0; j < n; j++)
            first[n]=s[j][0];
        for(int j = 0; j < n; j++)
        {for(int k=0;k<n;k++)
        {
            if(first[j]==first[k])
            {
                repeating++;
            }

        }
        }
    
        if(repeating==n)
        {
            printf("0");
        }
    //     for(int j = 0; j < n; j++)
    //     {
    //         for(int k=0;k<n;k++)
    //         {

    //         }

    // }

    return 0;
}
