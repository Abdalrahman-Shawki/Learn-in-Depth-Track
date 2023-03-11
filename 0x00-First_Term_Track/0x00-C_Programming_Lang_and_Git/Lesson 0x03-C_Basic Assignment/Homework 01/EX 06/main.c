#include<stdio.h>
void main(void)
{
    float F_Num , S_Num , Temp = 0;
    printf("Enter First Num: ");
    scanf("%f", & F_Num);
    printf("Enter Second Num: ");
    scanf("%f", & S_Num);
    Temp = F_Num;
    F_Num = S_Num;
    S_Num = Temp;
    printf("After swapping, Value of First Num = %0.2f\n", F_Num);
    printf("After swapping, Value of First Num = %0.2f", S_Num);
}