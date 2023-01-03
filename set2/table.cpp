#include<iostream>
using namespace std;
void table(int a);
main()
{
	int a;
	cout<<"enter the value of a:";
	cin>>a;
	table(a);
}
inline void table(int a)
{
	int i=1;
	
	while(i<=10)
	{
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
		i++;
	}
}