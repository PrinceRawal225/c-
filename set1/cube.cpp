//cube
#include<iostream>
using namespace std;
main()
{
	int a[100],i,n,cube;
	
	cout<<"enter the size of array:";
	cin>>n;
	
	cout<<"enter the array value:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"array value with cube"<<endl;
	for(i=0;i<n;i++)
	{
		cube=a[i]*a[i]*a[i];
		cout<<a[i]<<"="<<cube<<endl;
	}
}