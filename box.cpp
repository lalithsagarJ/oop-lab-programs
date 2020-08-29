#include<iostream>
using namespace std;
class box{
	double breadth;
	public:
	double length;
	friend void print_width(box b);
	void set_width(double w);
}bo;
void print_width(box b){
	cout<<"the width is :"<<bo.breadth;
}
void box :: set_width(double w){
	breadth = w;
}
int main(){
	bo.set_width(5.0);
	print_width(bo);
	return 0;
}
