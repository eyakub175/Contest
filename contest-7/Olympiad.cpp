#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()

{
    int p, count=0, loop=0;

    scanf("%d", &p);
    int s[p];

    for(int i=0; i<p; i++)
    {
        scanf("%d", &s[i]);

    }

    sort(s, s+p);



  for(int i=0; i<p; i++)
  {

         for(int j=1; j<p-loop; j++)
          {

              if(s[loop]==s[loop+1])
              {

                 p--;
              }
          }

      }


    printf("%d", p);

  }





