#include<stdio.h>

void main(void)
{
    float F_Num = 0 , S_Num = 0 , T_Num = 0 ;
    printf("Enter First Num: ");
    scanf("%f", & F_Num);
    printf("Enter Second Num: ");
    scanf("%f", & S_Num);
    printf("Enter third Num: ");
    scanf("%f", & T_Num);
    if (F_Num >= S_Num)
    {
        if (F_Num >= T_Num)
        {
            printf("Largest number = %f", F_Num);
        }

        else
        {
            printf("Largest number = %f", T_Num);
        }
    }
    
    else
    {
        if (S_Num >= T_Num)
        {
            printf("Largest number = %f", S_Num);
        }

        else
        {
            printf("Largest number = %f", T_Num);
        }
        
    }
    
}