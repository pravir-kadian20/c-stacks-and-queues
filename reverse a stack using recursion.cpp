#include <iostream>
#include<stack>
using namespace std;

void inseratbottom(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int y=s.top();
    s.pop();
    inseratbottom(s,x);
    s.push(y);
}
void reversestackrecursive(stack<int>&s){
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();
    reversestackrecursive(s);
    inseratbottom(s,x);
}
int main() {
    stack<int>s;
    for(int i=1;i<=5;i++){
        s.push(i);
    }
    reversestackrecursive(s);
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}
