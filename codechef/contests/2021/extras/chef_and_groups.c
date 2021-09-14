#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int y = 0; y < t; y++)
    {
        char s[1000000];
        scanf("%s", s);
        int n = strlen(s);
        int group = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            if (k > i || i == n - 1 && (s[i] == '0'))
            {
                continue;
            }
            else
            {

                if (s[i] == '1')
                {
                    group++;
                    int j = i;
                    while (s[j] == '1')
                    {
                        k = j + 1;
                        j++;
                    }
                }
            }
        }
        printf("%d\n", group);
    }
    return 0;
}