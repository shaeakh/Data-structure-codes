/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int



vector<ll>prime;
void sieve(int n)
{
    bool isprime[n + 1];
    memset(isprime, true, sizeof(isprime));
    
    prime.push_back(2);
    for (int p = 3; p * p <= n; p=p+2) {
        if (isprime[p] == true) {
            prime.push_back(p);
            for (int i = p * p; i <= n; i += 2*p) 
                isprime[i] = false;
        }
    }
    

}

void SegmentedSieve(ll l, ll r){
    ll x = sqrt(r);
    sieve(x);

    bool isPrime[r-l+1];
    memset(isPrime, true, sizeof(isPrime));


    for(ll i=0;prime[i]<=x;i++){
        
        for(ll j = ((l + prime[i] - 1)/prime[i])*prime[i]; j<=r; j = j + prime[i] ){
            if(isPrime[j-l]){
                //cout<<j<<" ";
                isPrime[j-l]  = false;
            }
        }
    }

     for(ll i = 0;i<=r;i++){
         if(isPrime[i]) cout<<i+l<<" ";
     }
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll l,r;
    cin>>l>>r;
    SegmentedSieve(l,r);
}
/* problem link: */