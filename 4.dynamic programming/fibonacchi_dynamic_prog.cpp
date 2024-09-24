#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

#define ll long long int

vector<int> v(10000, -1);

ll fibonacchi(ll n)
{
    v[1] = 0;
    v[2] = 1;
    for (ll i = 3; i <= n; i++)
    {
        if (v[i] == -1)
        {
            v[i] = v[i - 1] + v[i - 2];
            // cout<<"\n we r in"<<endl;
        }
    }
    return v[n];
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << fibonacchi(i) << " ";
    }
}
/* problem link: */