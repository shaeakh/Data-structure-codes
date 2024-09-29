#include <bits/stdc++.h>
using namespace std;

class QUEUE
{
private:
    vector<int> q;
    int front = 0, back = 0, size;

public:
    QUEUE(int size)
    {
        q.resize(size);
        this->size = size;
    };
    void push_(int x)
    {
        /*
        front = 0
        value at index 0 = x
        back = 1
        */
        if (back < this->size)
        {
            q[back] = x;
            back++;
        }
        else cout<<"Queue is full\n";
    }
    void pop_(){

        if(front<back){
            front++;
        }
        else cout<<"Queue is empty\n";
    }
    int getFront(){
        if(front<=back){
            return q[front];
        }        
        else return -1;
    }
    int getBack(){
        if(front<=back){
            return q[back-1];
        }      
        else return -1;      
    }
    
    bool IsEmpty(){
        if(front==back) return true;
        return false;
    }

    void print_(){
        for(int i=front; i<back; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    QUEUE q(5);
    cout<<"\n"<<q.IsEmpty()<<endl<<"\n";

    // q.push_(1);
    // q.push_(2);
    // q.push_(3);
    // q.push_(4);
    
    // cout<<"\n"<<q.IsEmpty()<<endl<<"\n";
    // cout<<"\n"<<q.getFront()<<endl<<"\n";
    // cout<<"\n"<<q.getBack()<<endl<<"\n";
    // q.pop_();
    // q.print_();
}