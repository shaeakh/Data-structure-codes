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
#define yes cout << "YES\n" 
#define newline cout<<"\n";
#define space cout<<" ";
#define for_n for(ll i = 0; i < n; i++)
#define pb push_back

vector<int>prime;

int np(int x){
    int l=0,h=prime.size()-1;
    while(h-l>1){
        int mid=(l+h)/2;
        if(prime[mid]>x)  h=mid;
        else l=mid+1;
    }
    
    if(prime[l]>x) return prime[l];
    else if(prime[h]>=x) return prime[h];
    else return -1;
}

int pp(int x){
    int l=0,h=prime.size()-1;
    while(h-l>1){
        int mid=(l+h)/2;
        if(prime[mid]>x)  h=mid-1;
        else l=mid;
    }
    if(prime[h]<=x) return prime[h];    
    else if(prime[l]<=x) return prime[l];
    else return -1;
}

void sieve(int n) 
{
    bool ISprime[n + 1];
    memset(ISprime, true, sizeof(ISprime));

    prime.pb(2);

    for (int p = 3; p<= n; p=p+2) { 
        if (ISprime[p] == true) {
            prime.pb(p);
            for (int i = p * p; i <= n; i += 2*p) 
                ISprime[i] = false;
        }
    }
    
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    sieve(1000);
    int n;cin>>n;
    for (int i = 0; i < 100; i++)
    {
        cout<<"for "<<i<<" "<<"PP "<<pp(i)<<" NP "<<np(i)<<endl;
    }
    
    
    
    return 0;
}
/* problem link: */
