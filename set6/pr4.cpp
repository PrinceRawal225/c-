#include<iostream>
using namespace std;
class Copy
{
	public:
		char user[100];
		int pass,ps=12345678;
		
	Copy()
	{
		
		
		cout<<"user :";
		cin>>user;
		cout<<"password :";
		cin>>pass;
		
	
	}
	
	~Copy()
	{
		if(pass==ps)
		{
			cout<<"\n*******Login successful********\n";
		}
		else
		{
			cout<<"\nX X X X login failed X X X X\n";
		}
	}
};
main()
{
	Copy c1;
}