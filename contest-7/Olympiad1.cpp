#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 100005;
const int MAX = 1100001;

int main ()
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int n,val;

    while (sf ("%d",&n) != EOF)
    {
        set <int> mySet;

        while (n--)
        {
            sf ("%d",&val);

            if (val > 0)
                mySet.in (val);
        }

        pf ("%d\n",mySet.size());

        mySet.clear();
    }

    return 0;
}
