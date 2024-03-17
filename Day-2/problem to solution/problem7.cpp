/*
    Time Duration: 6 minutes.
    Problem 7 : Given three numbers M,N and O. Check whether a triangle is Equilateral,Isosceles or Scalene.
*/
#include <stdio.h>
int main()
{
    int a, b, c;


    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c)
    {
        printf("This is an equilateral triangle.\n");
    }
    else if(a==b || a==c || b==c)
    {

        printf("This is an isosceles triangle.\n");
    }
    else
    {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}
