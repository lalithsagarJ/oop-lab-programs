#include<iostream>
using namespace std;
class rectangle{
	float length,breadth;
	public:
	void getdata();
	void displaydata();
	float area();
}ob;

void rectangle::getdata(){
	cout<<"enter the length and breadth \t";
	cin>>ob.length>>ob.breadth;
}
void rectangle::displaydata(){
	float r = ob.area();
	cout<<r<<endl;
}
float rectangle::area(){
	return (ob.length * ob.breadth);
}
int main(){
	rectangle o;
	o.getdata();
	o.displaydata();
	return 0;
}
