/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int st[4];
int r=-1,f=-1;

void enqueue();
void dequeue();
void display();

int main(){
    push();  
    pop();
    display();
    return 0;
}

void enqueue(int x){
    if(r==3) cout<<"overflow\n";
    else if(r==-1 && f==-1){
        f=0;
        r=0;
    }
    else{
        cin>>x;
        r++;
        st[r]=x;
    }
}
void dequeue(){
    if(r==-1 && f==-1) cout<<"Underflow\n";
    else if(f==r) { f=-1; r=-1; }
    else 
        f++;
}
void display(){
 if(r==-1 && f==-1) cout<<"empty\n";
    else {
     for(int i=f;i<=rf;i++){
        cout<<st[i]<<" ";
     }
    }
}