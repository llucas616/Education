#include<stdio.h>

int main(void)
{
    int n, i, j, sum, item;
    item = 1;
    sum = 0;
    printf("Enter n : ");
    scanf("%d",&n);
    for (i = 1;i <= n;i ++) {
        for (j = 1;j <= i;j ++) {
            item *= j;
        }
        sum += item;
        item = 1;
    }
    printf("%d! = %d",n,sum);
    return 0;
}