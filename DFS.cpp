/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
const int N = 10e5+10;
vector<int>g[N];
vector<bool>vis(N,false);
void DFS(int s){
    //take act on the v after immidiately entering the v
    if(vis[s]) return;
    vis[s] = true;

    for (int child_v : g[s])
    {
        //take act on the child_v before entering the child_v
 
        DFS(child_v);
        //take act on the child_v after exeuting the child_v
    }
    //take act on the v after exeuting the v
}


int main(){
    
    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    

    return 0;
}
/* problem link: */