#include<stdio.h>
#define N 5
int main(void)
{
    int a[N], i, min;
    printf("Enter a : ");
    for (i = 0;i < N;i ++) {
        scanf("%d",&a[i]);
        if (i == 0) 
        min = a[i];
        else {
            if (a[i] < min) 
            min = a[i];
        }
    }
    printf("Min = %d",min);
    return 0;
}