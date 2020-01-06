#include<iostream>
#include<stack>
using namespace std;

void transfer(stack<int>&s1,stack<int>&s2){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
}

void reversestack(stack<int>&s1){
    stack<int>s2;
    stack<int>s3;
    transfer(s1,s2);
    transfer(s2,s3);
    transfer(s3,s1);
}
int main(){
    stack<int>s;
    for(int i=1;i<=5;i++){
        s.push(i);
    }
    // while(!s.empty()){
    //     cout << s.top() << endl;
    //     s.pop();
    // }
    // reversestack(s);
    cout << s.size() << endl;
//     while(!s.empty()){
//         cout << s.top() << endl;
//         s.pop();
//     }
// }