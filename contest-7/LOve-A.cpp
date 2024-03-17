#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len, b, a, count=0;
    string s;
    cin>>s;
    len = s.length();
    //cout<<len;
    for(int i=0; i<len; i++)
    {

        if(s[i]=='a')
        {
            count++;
         //cout<<count<<endl;
        }

    }
    b = len - count;
    a = count - 1;

    if(a<b)
    {

        cout<<count+a<<endl;
    }
    else
    {

        cout<<len<<endl;
    }

    return 0;
}
