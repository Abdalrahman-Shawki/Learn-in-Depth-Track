#include<stdio.h>
void main(void)
{ 
    float Num = 0;
    printf("Enter a Num: ");
    scanf("%f", & Num);
    if (0 == Num)
    {
        printf("Number is Zero");
    }
    else if (0 < Num)
    {
        printf("Number %0.1f is Positive.", Num);
    }
    else
    {
        printf("Number %0.1f is Nagative.", Num);
    }
    
      
}