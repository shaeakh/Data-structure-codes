/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

pair<int,int> ExtendedGCD(int a,int b){
    if(b==0) return {1,1};
    pair<int,int>x2 = ExtendedGCD(a,b);
    int X = x2.second;
    int Y = x2.first - ((a/b)*x2.second) ;
    return {X,Y};
}

void solve() {
    int a,b;
    cin>>a>>b;
    pair<int,int>x = ExtendedGCD(a,b);
    cout<<x.first<<" "<<x.second<<endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */