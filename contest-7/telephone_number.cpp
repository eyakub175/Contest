#include<bits/stdc++.h>
using namespace std;

int main()
{

  int t, i, n, flag;
  cin>>t;
  while(t--)
  {
      flag=0;

      cin>>n;

      char tlpn[n];

      cin>>tlpn;

      int len=sizeof(tlpn)/sizeof(tlpn[0]);

      //sort(tlpn, tlpn+len);

      if(len>=11)
      {

    for(i=0; i<len; i++)
      {

         if(tlpn[i]=='8')
          {
       // printf("Flag: %d", flag);
           flag=1;
           break;
        //printf("Flag: %d", flag);

         }

      }

    }

  if(flag==1)
  {
      //printf("Flag: %d", flag);

      printf("YES\n");
  }
    else
  {
        printf("NO\n");
  }

  }
return 0;

}
