/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int ara[10]={1,3,5,9,10,11,15,26,34,39};
int upper_bound(int ara[],int x);
int lower_bound(int ara[],int x);
int main(){
    int f;
    while(1){
        cin>>f;
        int a= lower_bound(ara,f);
        int b= upper_bound(ara,f);
        cout<<ara[a]<<" "<<ara[b]<<endl;
    }
    return 0;
}
int lower_bound(int ara[],int x){
    int l=0,h=9;
    while(h-l>1){
        int mid=(l+h)/2;
        if(ara[mid]<x)  l=mid+1;
        else h=mid;
    }
    if(ara[l]>=x) return l;
    else if(ara[h]>=x) return h;
    else return -1;
}
int upper_bound(int ara[],int x){
    int l=0,h=9;
    while(h-l>1){
        int mid=(l+h)/2;
        if(ara[mid]<=x)  l=mid+1;
        else h=mid;
    }
    if(ara[l]>x) return l;
    else if(ara[h]>x) return h;
    else return -1;
}
/* problem link: */
