
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    int ascii;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ascii=ch;

    if (ascii >= 65 && ascii <= 90)
        printf("it is a capital letter");

    else if (ascii >= 97 && ascii <= 122)
        printf("it is a small letter");

    else if (ascii >= 48 && ascii <= 57)
        printf("it is a digit value");

    else if (ascii >= 0 && ascii <= 47 || ascii >= 58 && ascii <= 64 || ascii >= 91 && ascii <= 96 || ascii >= 123 && ascii <= 127)
        printf("it is a special symbols");
    return 0;
}