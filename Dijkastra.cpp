#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 10005;
const int INF = INT_MAX;

vector<vector<pair<ll,ll>>>g;
vector<bool>vis(N,false);
vector<ll>dis(N,INF);
priority_queue< pair<ll,ll>, vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;

void dijkstra(int source,int end){


    dis[source] = 0;
    pq.push({0,source});

    while(!pq.empty()){

        int v = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if(vis[v]) continue;
        vis[v] = true;

        for(auto u : g[v]){
            int child_v =  u.first;
            int child_d = u.second;
            if( dis[child_v] > dis[v] + child_d ) {
                dis[child_v] = dis[v] + child_d;
            }
        }


    }
    cout<<dis[end];
}
int main(){
    int n,m;
    int a,b,c;

    cin>>n>>m;
    while(m--){
        cin>>a>>b>>c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }

    dijkstra(1,n);

}


