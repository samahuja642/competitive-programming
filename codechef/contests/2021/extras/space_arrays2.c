#include <stdio.h>

void sort(long int *a, int n) {
    int counter=1;
    while (counter<n) {
        for (int i=0; i<n-counter; i++) {
            if (a[i]>a[i+1]) {
                long int temp = a[i];
                a[i] = a[i+1]; a[i+1] = temp;
            }
        }
        counter++;
    }
}

int main() {

    int T;
    long int N;
    scanf("%d", &T);

    while (T>0) {
        scanf("%ld", &N);
        int flag=0;
        unsigned long long int win=0;
        long int a[N];

        for(long int i=0; i<N; i++) {
            scanf("%ld", &a[i]);
        }
        sort(a, N);

        for (long int i=0; i<N; i++) {
            if (a[i]>i+1) {
                flag=1; break;
            }
            else if (a[i]<i+1) {
                a[i]++; win++;
                if (a[i]<i+1) i--;
            }
        }

        if (flag==1 || win%2 == 0) printf("Second\n");
        else printf("First\n");

        T--;
    }

    return 0;
}