/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
vector<int> st[4];
int t=-1;

void push();
void pop();
void display();

int main(){
    push();  
    pop();
    display();
    return 0;
}

void push(){
    int x;
    if(t==9) cout<<"overflow\n";
    else{
        cin>>x;
        t++;
        st[t]=x;
    }
}
void pop(){
    if(t==-1) cout<<"overflow\n";
    else {
        t--;
    }
}
void display(){
 if(t==-1) cout<<"empty\n";
    else {
     for(int i=0;i<10;i++){
        cout<<st[i]<<" ";
     }
    }
}