#include <stdio.h>

int main(void)
{
    int a = 1, i;
    for (a = 1; a <= 5; a++)
    {
        printf("[1] apples;\n[2] pears;\n[3] oranges;\n[4] grapes.\n");
        printf("Eneter the numeration :");
        scanf("%d", &i);
        if (i == 0)
        {
            break;
        }
        else
        {
            switch (i)
            {
            case 1:
                printf("3.00 yuan / kilogram!");
                break;
            case 2:
                printf("2.50 yuan / kilogram!");
                break;
            case 3:
                printf("4.10 yuan / kilogram!");
                break;
            case 4:
                printf("4.10 yuan / kilogram!");
                break;
            default:
                printf("0.00 yuan / kilogram!");
                break;
            }
        }
    }
    return 0;
}