#include<iostream>
#include<list>
using namespace std;

class queue{
	int cs=0;
	list<int>q;

public:
	queue(){
		cs=0;
	}

	bool isempty(){
		return cs==0;
	}

	void enqueue(int data){
		q.push_back(data);
		cs++;
	}

	void dequeue(){
		if(!isempty()){
			q.pop_front();
			cs--;
		}
	}

	int getfront(){
		
		return q.front();
	}
};

int main(){
	queue qu;
	for(int i=0;i<=5;i++){
		qu.enqueue(i);
	}
	while(!qu.isempty()){
		cout << qu.getfront() << endl;
		qu.dequeue();
	}
	return 0;
}