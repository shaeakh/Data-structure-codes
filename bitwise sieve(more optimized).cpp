#include<bits/stdc++.h>
using namespace std;
bool check(int N,int pos){
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos){
    return N = N | (1<<pos);
}

int N = 100,prime[100];
vector<int>status(100>>5,0);

void sieve(){
    int i,j,sqrtN;
    sqrtN = int ( sqrt(N) );
    for(int i=3; i<=sqrtN; i += 2){
        if(check(status[i>>5],i&31)==0){
            for(j=i*i; j<=N; j += 2*i){
                status[j>>5] = Set(status[j>>5],j&31);
            }
        }
    }
    puts("2");
    for(int i=3; i<=N; i += 2){
        if(check(status[i>>5],i&31)==0) cout<<i<<endl;
    }
}

int main(){
    sieve();
}
