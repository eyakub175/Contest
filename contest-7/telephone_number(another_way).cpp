#include<iostream>

 #include<cstdio>

 #include<string>
 using namespace std;
 int main()
 {
      int t;
      cin >> t;
     while(t--)
    {
        int n;
        string a;
        bool flag = false;

        cin >> n >> a;

        for(int i = 0;i <= n - 11;i++)
       {
             if(a[i] == '8')
                flag = true;
       }
         if(flag && a.size() >= 11)

            cout << "YES" << endl;
         else

         cout << "NO" << endl;
     }

    return 0;
    }

