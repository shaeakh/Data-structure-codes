#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll prefix_sum(ll a[], ll n,ll l, ll r){
    ll prefix[n];

    

    prefix[0] = a[0];

    for(ll i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + a[i];
    }

    ll ans = prefix[r] - prefix[l-1];

    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll a[] = {10, 20, 10, 5, 15};
    ll n = 5;
    ll l = 1, r = 3;

    cout << prefix_sum(a, n, l, r) << endl;

    return 0;
}