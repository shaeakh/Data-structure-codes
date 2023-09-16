#include <bits/stdc++.h>
using namespace std;

void swap1(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void printfx(vector<int> ara,int n){

for(int i=0;i<n;i++){
    cout<<ara[i]<<" ";
}
}

void sort1(vector<int> ara,int n){
int i,j,temp;
for(i=0;i<n;i++){
    bool flag = true;
    for(j=0;j<n-1;j++){
        if(ara[j]>ara[j+1]){
            swap1(ara[j],ara[j+1]);
            flag = false;
        }
    }
    if(flag){
        break;
    }

}

printfx(ara,n);
}


int main()
{
    vector<int> ara;
    int num;
    cin>>num;
    for(int i, n ;i < num ; i++){
         cin >> n;
        ara.push_back(n);
    }
    sort1(ara,num);

	return 0;
}


 
