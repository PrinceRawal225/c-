#include<iostream>
using namespace std;
class Add
{
	private:
		int a,b;
		
	friend void sum();			
};

void sum()
{
	Add a1;
	cout<<"A:";
	cin>>a1.a;
	cout<<"B:";
	cin>>a1.b;
	
	cout<<"Addition is :"<<a1.a+a1.b<<endl;
}
main()
{
	sum();
}