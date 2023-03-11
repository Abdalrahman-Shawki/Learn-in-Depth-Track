#include<stdio.h>
void main(void)
{
    int Num , Sum = 0;
    printf("Enter an intager Num: ");
    scanf("%d", &Num);
    for (int i = 0; i <= Num; i++)
    {
        Sum += i;
    }
    printf("The Sum = %d", Sum);
}