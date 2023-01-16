//WAP to demonstrate usage of Virtual Function.
#include<iostream>
using namespace std;
class A
{
	public:
	virtual void prince();	
};
class B :public A
{
	public:	
		void prince()
		{
			cout<<"1.flutter developer : fees 1,00,000"<<endl;
			cout<<"2.iOS developer : fees 1,00,000"<<endl;
			cout<<"3.Backed developer : fees 1,00,000"<<endl;
		}
};
main()
{
	A *a;
	B b1;
	a=&b1;
	a->prince();
}