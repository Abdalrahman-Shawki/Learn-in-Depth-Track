#include<stdio.h>
void main(void)
{
    char Character = 0;
    printf("Enter a Character: ");
    scanf("%c", & Character);
    printf("ASCII value of %c = %d", Character, Character);
}