#include<stdio.h>

int main(void)
{
    int m5, m2, m1, i;
    double money;
    i = 0;
    printf("Enetr money :");
    scanf("%lf",&money);
    for (m5 = 1;m5 < 20;m5 ++) {
        for (m2 = 1;m2 < 50;m2 ++) {
            for (m1 = 1;m1 < 100;m1 ++) {
                if (m5 * 5 + m2 * 3 + m1 * 1 == money && m5 + m2 + m1 * 3 == 100) {
                    printf("chant = %d,hen = %d,chick = %d\n",m5, m2, m1 * 3);
                    i ++;
                }
            }
        }
    }
    printf("There are kide of %d", i);
    return 0;
}