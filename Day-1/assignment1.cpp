/*
    Time Duration: 30 minutes.
    Problem 1:Given three side of a triangle x,y and z. Print the area of that triangle with three digits after decimal point.
*/
#include<stdio.h>
#include<math.h>

int main()
{

    double x, y, z, area, p;

    scanf("%lf %lf %lf",&x, &y, &z);

     if (x < 0 || y < 0 || z <0 || x+y <= z || x+z <=y || y+z <=x)
        {
            printf("Not Valid");
        }

     else

    p=(x+y+z)/2;

    area = sqrt(p*(p-x)*(p-y)*(p-z));

    printf("%.3lf", area);

    return 0;
}
