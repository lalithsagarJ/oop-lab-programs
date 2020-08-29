#include<iostream>
using namespace std;
class array{
	int n,b[];
	public:
	void input();
	void display();
}ob;
void array::input(){
	cout<<"enter the value of n :";
	cin>>ob.n;
	cout<<"enter the elements :";
	for(int i=0;i<ob.n;i++)
		cin>>ob.b[i];
}
void array::display(){
	cout<<"the array is :";
	for(int i=0;i<ob.n;i++)
		cout<<" "<<ob.b[i];
	cout<<endl;
}
int main(){
	ob.input();
	ob.display();
	return 0;
}
