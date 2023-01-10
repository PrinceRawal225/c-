#include<iostream>
using namespace std;
class Add
{
	public:
	Add(int a,int b)
	{
		cout<<"addition is:"<<a+b;
	}
};
main()
{
	int a,b;
	cout<<"A";
	cin>>a;
	cout<<"B";
	cin>>b;
	Add a1(a,b);
}