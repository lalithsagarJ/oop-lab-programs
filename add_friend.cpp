#include<iostream>
using namespace std;
class add{
	int a,b;
	public:
	void getdata();
	friend int sum();
}ob;
void add::getdata(){
	cout<<"enter the two numbers ";
	cin>>ob.a>>ob.b;
}
int sum(){
	return(ob.a+ob.b); 
}
int main(){
	int c;
	ob.getdata();
	c=sum();
	cout<<c<<endl;
	return 0;
}
