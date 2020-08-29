#include<iostream>
using namespace std;
class My_class{
	int n;
	char name[];
	public:
	void getdata();
}c;
void My_class::getdata(){
	cout<<"enter some data"<<endl;
	cin>>c.n>>c.name;
	cout<<endl<<"USN "<<c.n<<"\nNAME "<<c.name;
}
int main(){
	My_class r;
	r.getdata();
	return 0;
}
