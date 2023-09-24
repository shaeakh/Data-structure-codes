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

int in = 0,out=0;

pair<int,int> ExtendedGcd(int a,int b){
    if(b==0){
        cout<<"base case : 1,1"<<endl;
        return {1,1};
    }
    pair<int,int> c2 = ExtendedGcd(b,a%b);
    int x = c2.second;
    int y = c2.first - ((a/b)*c2.second);
    printf("Case %d: X = %d Y = %d X2 = %d Y2 = %d\n",in,x,y,c2.first,c2.second);
    in++;
    return {x,y};
}

void solve() {
    int a,b;
    cin>>a>>b;
    pair<int,int>c= ExtendedGcd(a,b);
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */
