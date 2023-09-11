/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";
#define for_n for(ll i = 0; i < n; i++)
#define pb push_back

void sieve(int n) 
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    
    //we escaped 2, without 2 all the evens are prime
    //we don't even need to go to the even numbers
    for (int p = 3; p * p <= n; p=p+2) { //thats why odd + 2 = odd ( p = p + 2 )
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += 2*p) //thats why odd + 2*odd = odd ( i += 2*p )
                prime[i] = false;
        }
    }

    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n; cin>>n;
    sieve(n);
    return 0;
}
/* problem link: */
