//WAP which illustrate the use of Method Overriding concept.
#include<iostream>
using namespace std;
class Prince
{
	public:
		char name[100];
		void detail()
		{
			cout<<"What is your name :";
			cin>>name;
		}
};
class Rawal
{
	public:
		void detail()
		{
			cout<<"\n\nmy name is : prince";	
		}	
};
main()
{
	Prince p1;
	Rawal r1;
	
	p1.detail();
	r1.detail();
}