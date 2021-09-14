#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[100000];
    scanf("%s", &sentence);
    int occurences[strlen(sentence)];
    for (int i = 0; i < strlen(sentence); i++)
    {
        for (int j = 0; j < strlen(sentence); j++)
        {
            occurences[i] = 1;
            if (sentence[i] == sentence[j])
            {
                occurences[i]++;
            }
        }
    }
    int repeat = 1;
    for (int i = 1; i < strlen(sentence); i++)
    {

        if (occurences[i] == occurences[0])
        {
            repeat++;
        }
    }
    int swapped, temp;
    if (repeat == strlen(sentence))
    {
        while (1)
        {
            swapped = 0;
            for (int i = 0; i < (strlen(sentence) - 1); i++)
            {
                if (sentence[i] > sentence[i + 1])
                {
                    temp = sentence[i];
                    sentence[i] = sentence[i + 1];
                    sentence[i + 1] = temp;
                    swapped = 1;
                }
            }
            if (swapped == 0)
                break;
        }
        for (int i = 0; i < strlen(sentence); i++)
        {
            printf("%c", sentence[i]);
        }
    }

    return 0;
}