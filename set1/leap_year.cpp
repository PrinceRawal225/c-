#include<iostream>
using namespace std;
main()
{
	int i;
	
	cout<<"\t\t\t\t\t\t\t****************LEAP YEAR****************\n\n";
	for(i=2000;i<=3000;i++)
	{
		if(i%100==0)
		{
			if(i%400==0)
			{
				cout<<i<<"\t";
			}
		}
		else if(i%4==0)
		{
			cout<<i<<"\t";
		}
	}
}