#include <iostream>
#include<vector>
using namespace std;

template<typename T>
class stack{
private:
    vector<T>v;
public:
    void push(T data){
        v.push_back(data);
    }

    bool empty(){
        if(v.empty()){
            return true;
        }
        return false;
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }
    T top(){
        return v[v.size()-1];
    }
};
int main() {
    stack<int> s;
    stack<char>s1;

    for(int i=1;i<=5;i++){
        s.push(i*i);
    }
    for(int i=65;i<=70;i++){
        s1.push(i);
    }
    cout << "elements of first stack" << endl;
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop(); 
    }
    cout << "elements of second stack" << endl;
    while(!s1.empty()){
        cout << s1.top() << endl;
        s1.pop(); 
    }
}
