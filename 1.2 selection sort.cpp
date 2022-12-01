/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int ara[],int n ){
    int temp;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if(ara[i]>ara[j]){
                swap( ara[i],ara[j] );
            }
        }
    }
    for (int i = 0; i < n; i++) cout<<ara[i]<<" ";
}


int main(){
    int n;
    cin>>n;
    int ara[n];
    for (int i = 0; i < n; i++) cin>>ara[i];
    SelectionSort(ara,n);
    return 0;
}


