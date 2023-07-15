/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

const int N = 10e5+10;
int cnt = 0;

vector<vector<int>>adj_list(N);
vector<int>Indeg(N,0);
queue<int>Q;

void topo_sort(int n){
    for (int  i = 0; i < n; i++){
        if(Indeg[i]==0) Q.push(i);
    }

    while (!Q.empty())
    {
        cnt++;
        int x = Q.front();
        Q.pop();
        cout<<x<<" ";
        for(auto it: adj_list[x]){
            Indeg[it]--;
            if(Indeg[it]==0){
                Q.push(it);
            }
        }
    }
  
}

int main(){

    int n,m;
    int u,v;
    cin>>n>>m;

    for (int  i = 0; i < m; i++)
    {
        // u --> v
        cin>>u>>v;
        adj_list[u].push_back(v);
        Indeg[v]++;
    }

    topo_sort(n);
    
    return 0;
}
/* problem link: */