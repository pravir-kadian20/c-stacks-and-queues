#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int>s1,s2;
    int cs;
public:
    queue(){
        cs=0;
    }
    void push(int data){
        s1.push(data);
        cs++;
    }

    bool empty(){
        return cs==0;
    }

    void pop(){
        while(s1.size()!=1){
            s2.push(s1.top());
            s1.pop();
        }
        s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        cs--;
    }

    int front(){
        while(s1.size()!=1){
            s2.push(s1.top());
            s1.pop();
        }
        int temp=s1.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return temp;
    }
};
int main(){
    queue q;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}