#include<bits/stdc++.h>
using namespace std;

vector<int>Prime;

void LinearSieve(int N){
    Prime.push_back(2);
    vector<int>lp(N+1,0);

    for(int i=3;i<=N;i=i+2){
        if(lp[i]==0){
            lp[i] = i;
            Prime.push_back(i);
        }
        for(int j=1; i*(Prime[j])<=N;j++){
            lp[i*(Prime[j])] = Prime[j];
            if( Prime[j] == lp[i] ) break;
        }

    }

}


int main(){

    int N; cin>>N;
    LinearSieve(N);
    for(int i = 0; i<Prime.size();i++) cout<<Prime[i]<<" ";
}


