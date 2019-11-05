#include<stdio.h>

int main(void)
{
    double odometer, a, i;
    int time, b;
    printf("Enetr odometer and time : ");
    scanf("%lf%d",&odometer,&time);
    if (time >= 5)
    {
        b = time / 5 * 2;
    }
    else 
    {
        b = 0;
    }
    if (0 < odometer && odometer <= 3)
    {
        a = 10.0;
        printf("You need to pay for %.2f",a + b);
    }
    if (3 < odometer && odometer <= 10)
    {
        a = 10.0 + (odometer - 3) * 2;
        printf("You need to pay for %.2f",a + b);
    }
    if (10 < odometer)
    {
        a = 10.0 + 14.0 + (odometer - 10) * 3;
        printf("You need to pay for %.2f",a + b);
    }
    return 0;
}