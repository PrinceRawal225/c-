//STRING IS NUMBRICAL OR NOT.
#include<iostream>
using namespace std;
main()
{
	char a[100];
	int i,count=0;
	
	cout<<"enter the string:";
	cin>>a;
	
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			count++;
		}
	}
	//cout<<count<<endl;
	
	if(count>=1)
	{
		cout<<"string is numbrical.";
	}
	else
	{
		cout<<"string is not numbrical.";
	}
}