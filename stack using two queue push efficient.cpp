#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int>q1;
    queue<int>q2;
    int cs;
public:
    stack(){
        cs=0;
    }

    bool empty(){
        return cs==0;
    }

    void push_back(int data){
        q1.push(data);
        cs++;
    }

    void pop_back(){
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        cs--;

        swap(q1,q2);
    }

    int top(){
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int temp=q1.front();
        q1.pop();

        q2.push(temp);
        swap(q1,q2);
        return temp;
    }
};
int main(){
    int n;
    cin>>n;
    stack s;
    for(int i=1;i<=n;i++){
        s.push_back(i);
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop_back();
    }
}