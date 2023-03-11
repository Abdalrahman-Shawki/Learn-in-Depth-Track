#include<stdio.h>
void main(void)
{
    char Alpha = 0;
    printf("Enter an Alphabet: ");
    scanf("%c", &Alpha);
    if (('A' <= Alpha <= 'Z'))
    {    
        printf("%c is an Alphabet", Alpha);
    }

    else if (('a' <= Alpha <= 'z'))
    {
         printf("%c is an Alphabet", Alpha);
    }

    else
    {
        printf("%c is not an Alphabet", Alpha);
    }
    
}