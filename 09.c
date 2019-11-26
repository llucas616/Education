#include<stdio.h>
#include<math.h>
int main(void)
{
    int i, j, m, item;

    for (i = 2;i <= 500;i ++) {
        item = sqrt(i);
        m = 0;

        for (j = 2;j <= item;j ++) {
            if (i % j == 0) {
                m ++;
            }
            if (m != 0) {
                break;
            }
        }

        if (m == 0) {
            printf("%d\t",i);
        }
    }
    return 0;
}