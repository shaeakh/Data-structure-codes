#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 10005;
const int INF = INT_MAX;

dist[N][N];


nt main(){

    for(int i=0;i<N ;i++){
        for(int j=0;j<N ;j++){
            if(i==0) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }

    int n,m;
    int a,b,c;

    cin>>n>>m;
    while(m--){
        cin>>a>>b>>c;
        dist[a][b]=c;
    }

    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if( dist[i][j] > dist[i][k] + dist[k][j] ){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }


}
