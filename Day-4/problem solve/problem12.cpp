
/*
    Time Duration: 4 minutes.
    Problem 4: in this  problem you have to find the 2nd large number from an array 
*/

#include <stdio.h>
 int main ()
    {

        int number[30];
        int i, j, a, n, counter, average;

        scanf("%d", &n);

        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }

        }

        printf("%d\n", number[1]);


     return 0;
    }
