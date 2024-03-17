/*
    Time Duration: 4 minutes.
    Problem 12: Given a character C. Determine character C is an uppercase alphabet or lowercase alphabet or a digit.

#include <stdio.h>
int main()
{
    char ch;

    scanf("%c", &ch);


    if(ch>='a' && ch<='z')
    {
        printf("%c is lowercase alphabet.\n", ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("%c is uppercase alphabet.\n", ch);
    }
    else
    {
        printf("'%c' is a digit.\n", ch);
    }
    return 0;

}
