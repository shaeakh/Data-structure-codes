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

    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){ Make(i); }

    vector< pair<int, pair<int,int> > > edge;
    for (int i = 0; i < m; i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edge.push_back({wt, {u,v}});
    }
    
    sort(edge.begin(),edge.end());

    int total_cost = 0;
    for(auto &ed: edge ){
        int wt = ed.first;
        int u = ed.second.first;
        int v = ed.second.second;
        if(Find(u)==Find(v)) continue;
        else {Union(u,v);
        total_cost = total_cost + wt;
        cout<<u<<" "<<v<<endl;}
    }
    cout<<total_cost<<endl;
    return 0;
}
/* problem link: */