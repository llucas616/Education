#include<stdio.h>
#include<math.h>
int main(void)
{
    int a, n, sum = 0, i, m;
    printf("Enetr a , n :");
    scanf("%d%d",&a,&n);
    for (i = 1;i <= n;i ++) {
        m = m * 10 + a;
        sum += m;
    }
    printf("The result : %d",sum);
    return 0;
}