#include<iostream>
#include<deque>
using namespace std;

void largestinkwindow(int n,int *a,int k){
    deque<int>q;
    int i;
    for(i=0;i<k;i++){
        while(!q.empty() && a[i]>=a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }

    for(;i<n;i++){
        cout << a[q.front()] << " ";
        while(!q.empty() && q.front()<= i-k){
            q.pop_front();
        }
         while(!q.empty() && a[i]>=a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    cout << a[q.front()];
}

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    largestinkwindow(n,a,k);
}