#include<stdio.h>

int main(void)
{
    int i, n, m, score;
    printf("The number of student : \n");
    scanf("%d",&n);
    for (i = 1;i <= n;i ++)
    {
        printf("Enetr the people number and score :");
        scanf("%d",&score);
        m = score / 10;
        switch(m)
        {
            case 10 :
            case 9  :
            printf("A!\n");
            break;
            case 8  :
            printf("B!\n");
            break;
            case 7  :
            printf("C!\n");
            break;
            case 6  :
            printf("D!\n");
            break;
            case 5 :case 4 :case 3:case 2:case 1:case 0:
            printf("E!\n");
            break;
            default :printf("Invalid Value!");break;
        }
    }
    return 0;
}
