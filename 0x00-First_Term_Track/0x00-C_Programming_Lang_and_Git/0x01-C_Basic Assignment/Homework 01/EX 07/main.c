#include<stdio.h>
void main(void)
{
    float F_Num , S_Num;
    printf("Enter First Num: ");
    scanf("%f", & F_Num);
    printf("Enter Second Num: ");
    scanf("%f", & S_Num);
    F_Num = F_Num + S_Num;
    S_Num = F_Num - S_Num;
    F_Num = F_Num - S_Num;
    printf("After swapping, Value of First Num = %0.2f\n", F_Num);
    printf("After swapping, Value of First Num = %0.2f\n", S_Num);
}