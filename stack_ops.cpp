#include<iostream>
#include<iomanip>

using namespace std;
class stack{
	public:
		int n;
		int push(int n,int *top,int []);
		int pop(int n,int *top,int []);
		int peek(int n,int *top,int []);
		int isempty(int *top,int n,int []);
		int isfull(int n,int *top,int []);
		int display(int n,int *top,int []);
}ob;

int stack :: push(int n,int *top,int a[]){
	if((*top) == n-1)
		cout<<"stack overflow "<<endl;
	else{
		int e;
		cout<<"Enter element to push :";
		cin>>e;
		(*top)++;
		a[(*top)]=e;
	}
	return 0;
}

int stack :: pop(int n,int *top,int a[]){
	if((*top) == -1)
		cout<<"stack underflow "<<endl;
	else{
		int e=a[(*top)];
		(*top)--;
	}
	return 0;
}

int stack :: peek(int n,int *top,int a[]){
	if((*top)==-1)
		cout<<"No elements in stack :"<<endl;
	cout<<"The top element is "<<a[(*top)]<<"\n";
	return 0;
}

int stack :: isempty(int *top,int n,int a[]){
	if((*top)==-1)
		cout<<"stack empty "<<endl;
	else
		cout<<"stack not empty "<<endl;
	return 0;
}

int stack :: isfull(int n,int *top,int a[]){
	if((*top)==n-1)
		cout<<"Stack is full "<<endl;
	else
		cout<<"Stack is not full "<<endl;
	return 0;
}

int stack :: display(int n,int *top,int a[]){
	if((*top)==-1)
		cout<<"NO elements in stack :"<<endl;
	else{
		cout<<"Elements in stack are :";
		for(int i=0;i<=(*top);i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

int main(){
	int top=-1;
	cout<<"enter the MAX size :";
	cin>>ob.n;
	int a[ob.n];
	while(1){
		int ch;
		cout<<"\nOptions\n1.PUSH\n2.POP\n3.PEEK\n4.ISFULL\n5.ISEMPTY\n6.DISPLAY\n0.EXIT    :";
		cin>>ch;
		if(ch==0)
			exit(0);
		switch(ch){
			case 1:ob.push(ob.n,&top,a);
			       break;
			case 2:ob.pop(ob.n,&top,a);
			       break;
			case 3:ob.peek(ob.n,&top,a);
			       break;
			case 4:ob.isfull(ob.n,&top,a);
			       break;
			case 5:ob.isempty(&top,ob.n,a);
			       break;
			case 6:ob.display(ob.n,&top,a);
			       break;
			default:
			       cout<<"Wrong choice\n\n";
			       break;
		}
	}
	return 0;
}
