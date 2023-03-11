#include<stdio.h>

void main(void)
{
    float F_Num = 0 , S_Num = 0 ;
    char operation;
    printf("Enter First Num: ");
    scanf("%f", &F_Num);
    printf("Enter Second Num: ");
    scanf("%f", &S_Num);
    printf("Enter the operation (+ , - , / , *):");
    scanf(" %c", &operation);
    switch (operation)
    {
    case '+':
        printf("%0.1f + %0.1f = %0.3f", F_Num, S_Num , F_Num + S_Num);
        break;

    case '-':
        printf("%0.1f - %0.1f = %0.3f", F_Num, S_Num , F_Num - S_Num);
        break;

    case '/':
        printf("%0.1f / %0.1f = %0.3f", F_Num, S_Num , F_Num / S_Num);
        break;

    case '*':
        printf("%0.1f * %0.1f = %0.3f", F_Num, S_Num , F_Num * S_Num);
        break;

    default:
        printf("Invalid input");
        break;
    }
}
