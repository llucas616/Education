#include<stdio.h>

int main(void)
{
    int i, j, k, n, m;
    printf("Enter n : ");
    scanf("%d",&n);
    for (i = 1;i <= n;i ++) {
        for (j = 1;j <= 2;j ++) {
            for (k = 1;k < i;k ++) {
                printf(" ");
            }
            printf("w");
            for (m = 1;m <= 2 * (n - i);m ++) {
                printf(" ");
            }
            printf("w");
            for (k = 1;k < i;k ++) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0; 
}