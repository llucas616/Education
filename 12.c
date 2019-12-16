#include<stdio.h>
void line(int a[],int n);
int main(void)
{
    int n = 5, i;
    int a[n];
    printf("Enter a : ");
    for (i = 0;i < n;i ++) {
        scanf("%d",&a[i]);
    }
    line(a,n);
    for (i = 0;i < n;i ++) {
        printf("%d\t",a[i]);
    }
    return 0;
}

void line(int a[],int n)
{
    int i, temp, j, k;
    for (i = 0;i < n - 1;i ++) {
        temp = a[i];
        for (j = i + 1;j < n;j ++) 
        {
            if (temp < a[j])
            {
                temp = a[j];
                k = j;
            }
        }
        if (k != 0)
        {
            a[k] = a[i];
            a[i] = temp;
            k = 0;
        }
    }
}