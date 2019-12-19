#include<iostream>
#include<stack>
using namespace std;

void printspan(int *a,int n){
    stack<int>s;
    int ans[1000];

    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()]<=a[i]){
            s.pop();
        }
        int betterdays = s.empty() ? 0 : s.top();

        int span = i - betterdays;

        ans[i] = span;
        s.push(i);
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }

}

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printspan(a,n);
}