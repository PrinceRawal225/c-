#include<iostream>
using namespace std;
class Copy
{
	public:
	Copy(Copy &c2)
	{
		char user[100];
		int pass,ps=12345678;
		
		cout<<"user :";
		cin>>user;
		cout<<"password :";
		cin>>pass;
		
		if(pass==ps)
		{
			cout<<"\n*******Login successful********\n";
		}
		else
		{
			cout<<"\nX X X X login failed X X X X\n";
		}
	}
	
	Copy()
	{
		
	}
};
main()
{
	Copy c2;
	Copy c1(c2);
}