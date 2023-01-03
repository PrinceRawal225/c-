// two integer arrays using user define function
#include<iostream>
using namespace std;
void swap();
main()
{
	swap();
}
void swap()
{
	int a[100],b[100],i,n,c[100];
	
	cout<<"enter the size of array:";
	cin>>n;
	
	cout<<"enter the value of A:--------"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	
	cout<<"enter the value of B:--------"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	cout<<"\n**********swap array A & B*************\n";
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
			
	}
	
	cout<<"********B********\n";
	for(i=0;i<n;i++)
	{
		cout<<"b["<<i<<"]"<<"="<<b[i]<<endl;
	}
	
	cout<<"********A*********\n";
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]"<<"="<<a[i]<<endl;
	}
}