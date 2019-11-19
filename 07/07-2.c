#include<stdio.h>
#include<math.h>
int main(void)
{
    int m;
    double sum;
 
    m = 1.0;
    sum = 1.0;

    while (pow(m,-1) >= 0.0001 )
    {
        m += 2.0;
        sum += pow(m,-1) * pow(-1, m / 2.0 - 0.5);
    }

    printf("Result : %lf",4.0 * sum);
    return 0;
}