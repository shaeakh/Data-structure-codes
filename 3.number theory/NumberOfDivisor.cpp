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
vector<ll>prime;
void sieve(int n)
{
    bool isprime[n + 1];
    memset(isprime, true, sizeof(isprime));

    //we escaped 2, without 2 all the evens are isprime
    //we don't even need to go to the even numbers
    prime.push_back(2);
    for (int p = 3; p * p <= n; p=p+2) { //thats why odd + 2 = odd ( p = p + 2 )
        if (isprime[p] == true) {
            prime.push_back(p);
            for (int i = p * p; i <= n; i += 2*p) //thats why odd + 2*odd = odd ( i += 2*p )
                isprime[i] = false;
        }
    }
    //for(int i=0;i<prime.size();i++){cout<<prime[i]<<" ";}

}

ll Nod(ll n){    
    int sq = sqrt(n);
    ll nod = 1;
    for(int i=0;i<prime.size()&&prime[i]<=sq;i++){
        if(n==1)break;
        int p = 0;
        while(n%prime[i]==0){
            p++;
            n = n/prime[i];
            sq = sqrt(n);
        }
        nod = nod * (p+1);
    }
    if(n>1) nod = nod * 2;
    return nod;
}



int main(){


    ll n; cin>>n;
    sieve(n);
    Nod(n);
    

    return 0;
}
/* problem link: */
