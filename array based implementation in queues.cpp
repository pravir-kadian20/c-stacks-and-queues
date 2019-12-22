#include<iostream>
using namespace std;

class queue{
	int cs;
	int ms;
	int front;
	int rear;
	int *arr;
public:
	queue(int default_size=8){
		cs=0;
		ms=default_size;
		front=0;
		rear=ms-1;
		arr=new int[ms];
	}

	bool isfull(){
		return cs==ms;
	}

	bool isempty(){
		return cs==0;
	}

	void enqueue(int data){
		if(!isfull()){
			rear=(rear+1)%ms;
			arr[rear]=data;
			cs++;
		}
	}

	void dequeue(){
		if(!isempty()){
			front=(front+1)%ms;
			cs--;
		}
	}

	int getfront(){
		return arr[front];
	}

};
int main(){
	queue q;
	for(int i=0;i<=6;i++){
		q.enqueue(i);
	}
	q.dequeue();
	q.enqueue(10);
	while(!q.isempty()){
		cout << q.getfront() << endl;
		q.dequeue();
	}
	return 0;
}