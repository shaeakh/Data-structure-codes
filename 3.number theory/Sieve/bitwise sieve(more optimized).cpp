#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>PrimeList;

bool check(ll N,int pos){
    return (bool)(N & (1<<pos));
}
int Set(ll N,int pos){
    return N = N | (1<<pos);
}



void BitWise_sieve(ll N){
    ll n = (N+32-1)>>5 ;
    vector<int>status(n,0);
    ll i,j,sqrtN;
    sqrtN = (long long int) ( sqrt(N) );

    PrimeList.push_back(2);
    for(i=3; i<=N; i += 2){
        if(check(status[i>>5],i&31)==0){
            PrimeList.push_back(i);
            for(j=i*i; j<=N; j += 2*i){
                status[j>>5] = Set(status[j>>5],j&31);
            }
        }
    }
    
    for(int i=0; i<PrimeList.size(); i += 1){
        cout<< PrimeList[i] <<" ";
    }
}

int main(){
    ll n; cin>>n;
    BitWise_sieve(n);
}
