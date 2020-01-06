#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int>q1,q2;
    int cs;

public:
    stack(){
        cs=0;
    }

    bool empty(){
        return cs==0;
    }

    void push(int data){
        q2.push(data);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
        cs++;
    }

    void pop(){
        q1.pop();
        cs--;
    }

    int top(){
        return q1.front();
    }
};
int main(){
    stack s;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        s.push(i);
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}