/*
    Time Duration: 5 minutes.
    Problem 13:Given a character C. Determine the character is a vowel or consonant.
*/
#include <stdio.h>
int main() {
    char ch;
    int lv, uv;

    scanf("%c", &ch);


    lv = (ch == 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch == 'u');


    uv = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lv || uv)
        printf("%c is a vowel.", ch);
    else
        printf("%c is a consonant.", ch);
    return 0;
}
