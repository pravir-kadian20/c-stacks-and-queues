#include <iostream>
using namespace std;

template<typename T>
class queue{
    int cs;
    int ms;
    int f;
    int r;
    T *arr;

public:
    queue(int ds=4){//default size of array
        cs=0;
        ms=ds;
        f=0;
        r=ms-1;
        arr=new T[ms];
    }

    bool isempty(){
        if(cs==0){
            return true;
        }
        return false;
    }

    bool isfull(){
        if(cs==ms){
            return true;
        }
        return false;
    }
    void push(T data){
        if(!isfull()){
            r=(r+1)%ms;
            arr[r]=data;
            cs++;
        }
    }

    void pop(){
        if(!isempty()){
            f=(f+1)%ms;
            cs--;
        }
    }

    T getfront(){
        return arr[f];
    }
};
int main() {
    queue<int>q;

    for(int i=1;i<=6;i++){
        q.push(i);
    }
    q.pop();
    q.push(8);

    while(!q.isempty()){
        cout << q.getfront() << endl;
        q.pop();
    }
}
