#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

class STACK
{
private:
    int top = -1, size;
    vector<int> s;
public:
    STACK(int size){
        this->size = size;
        s.resize(size);
    };

    void push_(int x){
        if(top<size){
            top++;
            s[top] = x;
        }
        else cout<<"Stack is full\n";
    }

    void pop_(){
        if(top>=0){
            top--;
        }
        else cout<<"Stack is empty\n";
    }

    int getTop(){
        if(top>=0){
            return s[top];
        }
        else return -1;
    }
    
    bool IsEmpty(){
        if(top==-1) return true;
        else return false;
    }

    void print(){
        for(int i=top; i>=0; i--){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    
};



int main()
{
    set<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(3);

    for(auto i: s){
        cout<<i<<" ";
    }

}
/* problem link: */