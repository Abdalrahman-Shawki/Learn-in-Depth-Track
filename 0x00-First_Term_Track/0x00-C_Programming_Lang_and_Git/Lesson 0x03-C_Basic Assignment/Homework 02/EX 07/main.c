#include<stdio.h>
void main(void)
{
    int Fac_Num, Result = 1;
    printf("Enter a Num: ");
    scanf("%d", & Fac_Num);
    if(Fac_Num > 0)
    {
        for(int i = Fac_Num ; i > 0 ; i-- )
        {
            Result *= i;
        }

        printf("The factorial of %d is %d", Fac_Num , Result);
    }
    else if (0 == Fac_Num)
    {
        printf("The factorial of %d is %d", Fac_Num , 1);
    }
    

    else
    {
        printf("Invalid Input");
    }
}