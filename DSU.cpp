/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

const int N = 10e5+10;
int P[N];
int S[N];

void Make(int v){
    P[v] = v;
    S[v] = 1;
}

int Find(int v){
    if(v==P[v]) return v;
    return P[v] = Find(P[v]);
}

void Union(int a,int b){
    a = Find(a);
    b = Find(b);
    if(a!=b)
    {
        if(S[a]<S[b]) swap(a,b);
        P[b] = a;
        S[a] =  S[a] + S[b];
    }
}

int main(){

    int n,k;
    int a,b;
    int connect_component = 0;

    cin>>n>>k;
    for (int i = 1; i <= n; i++) Make(i);
    while (k--){
        cin>>a>>b;
        Union(a,b);
    }
    
    for (int i = 1; i <= n; i++){
        if(Find(i)==i) connect_component++;
    }
    cout<<connect_component<<endl;
    return 0;
}
/* problem link: */