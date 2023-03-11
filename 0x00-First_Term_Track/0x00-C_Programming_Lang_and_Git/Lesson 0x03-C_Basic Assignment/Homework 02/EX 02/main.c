#include<stdio.h>
void main(void)
{
    char Alpha = 0;
    printf("Enter an character you want to check: ");
    scanf("%c", &Alpha);
    if ( ('A' <= Alpha <= 'Z') || ('a' <= Alpha <= 'z') )
    {
        switch (Alpha)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                printf("%c is a vowel", Alpha);
                break;

            default:
                printf("%c is a consonant", Alpha);
                break;
        }
    }
    else
        printf("Invalid Input!");
}