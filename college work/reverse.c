#include<stdio.h>


int main() {


int n, r, rev = 0;

int *num;


printf("Enter a number:");

scanf("%d", &n);


num = &n;


while (*num > 0) {

r = *num % 10;

rev = rev * 10 + r;

*num = *num / 10;

}


printf("Reverse number:%d", rev);


return 0;

}