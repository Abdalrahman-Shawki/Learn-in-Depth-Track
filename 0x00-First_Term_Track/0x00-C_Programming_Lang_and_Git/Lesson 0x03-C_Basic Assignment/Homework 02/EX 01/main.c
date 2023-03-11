#include<stdio.h>
void main(void)
{
   int Num = 0;
   printf("Enter an integar you want to check: ");
   scanf("%d", & Num);
   if ( 0 == (Num % 2))
   {
        printf("%d is an even Number.\n", Num);
   }
   else
   {
        printf("%d is an odd Number.\n", Num);
   }
}