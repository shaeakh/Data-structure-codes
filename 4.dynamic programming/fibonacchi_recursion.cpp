#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

#define ll long long int

vector<int>v(10000,-1);

ll fibonacchi(ll n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(v[n]!=-1) return v[n];
    else{
        v[n] = fibonacchi(n-1) + fibonacchi(n-2);
        return v[n];
    }
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout<<fibonacchi(i)<<" ";
    }
    
}
/* problem link: */