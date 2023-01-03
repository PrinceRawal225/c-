//string in toggal case
#include<iostream>
using namespace std;
main()
{
	char a[100];
	int i;
	
	cout<<"enter the string:=";
	cin>>a;
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
			cout<<a[i];
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
			cout<<a[i];
		}
	}
	
}