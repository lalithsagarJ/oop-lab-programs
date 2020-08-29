#include<iostream>
using namespace std;
class si{
	int p;
	float time,rate;
	public:
	void getdata();
	inline float simp(){
		return (p*time*rate)/100;
	}
	friend float sim();
	void display();
}s;
void si::getdata(){
	cout<<endl<<"enter the principle,time(in months),rate :";
	cin>>s.p>>s.time>>s.rate;
	s.time=s.time/12;
}
float sim(){
	return (s.p*s.time*s.rate)/100;
}
void si::display(){
	cout<<"The simple interest using inline function is :"<<simp()<<endl;
	cout<<"The simple interest using friend function is :"<<sim()<<endl;
	cout<<"The total amount after adding interest is :"<<sim()+s.p<<endl;
}
int main(){
	s.getdata();
	s.display();
	return 0;
}
