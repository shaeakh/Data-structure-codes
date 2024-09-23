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
    
};



int main()
{
    STACK c(5);

    // cout<<"\n"<<c.IsEmpty()<<endl<<"\n";

    c.push_(1);
    c.push_(2);
    c.push_(3);
    c.push_(4);
    
    // cout<<"\n"<<c.IsEmpty()<<endl<<"\n";
    // cout<<"\n"<<c.getTop()<<endl<<"\n";    
    c.pop_();
    cout<<"\n"<<c.getTop()<<endl<<"\n";   




}
/* problem link: */