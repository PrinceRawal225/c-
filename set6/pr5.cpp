#include<iostream>
using namespace std;
class Copy
{
	public:
		int ps=12345678;
		
	Copy(char user[],int pass)
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
	
	Copy(Copy &c2)
	{
		cout<<"\n*********Welcome**********\n";
	}
	
	Copy()
	{
		
	}
	
};
main()
{
		char user[100];
		int pass;
		cout<<"user :";
		cin>>user;
		cout<<"password :";
		cin>>pass;
		Copy c1(user,pass);
		Copy c3;
		Copy c2(c3);
	
}