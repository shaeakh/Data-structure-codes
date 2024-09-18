#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


        ll prefix_sum(ll a[], ll n,ll l, ll r){

            ll prefix[n+1];

            prefix[0] = 0;

            for(ll i = 1; i < n+1; i++){
                prefix[i] = prefix[i-1] + a[i-1];
            }

            ll ans = prefix[r+1] - prefix[l];
            return ans;
        }



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll a[] = {10, 20, 10, 5, 15};
    ll n = 5;
    ll l = 1, r = 5;

    cout << prefix_sum(a, n, l-1, r-1) << endl;

    return 0;
}