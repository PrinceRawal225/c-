//recursion using fact number.
#include<iostream>
using namespace std;
int fact(int a);
main()
{
	int a,i;
	cout<<"enter the value of A:";
	cin>>a;
	i=fact(a);
	cout<<a<<"factorial is="<<i;
}
int fact(int a)
{
	if(a==1)
	{
		return a;
	}
	return a*fact(a-1);
}