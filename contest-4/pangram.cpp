


#include <stdio.h>

 int main()
 {
    int index, n, i, pangram;
    scanf("%d", &n);

    char ch, x[n] = {0};


   for(i=0; i<n; i++)
   {
        if('A'<=ch[i]&&ch[i]<='Z')
            index = ch[i]-'A';
        else if('a'<=ch[i] && ch[i]<='z')
            index = ch[i]-'a';
        else
            continue;

    x[index] = 1;
    }

    pangram = 1;

    for (i = 0; i < 26; ++i) {
        if (x[i] == 0)
            pangram = 0;
    }

    if (pangram == 1){
        printf("Your sentence have all letter so is, Pangram\n");

    }

    else if(pangram == 0) {
        printf("This sentence is not a  Pangram\n");

    }

    return 0;
}
