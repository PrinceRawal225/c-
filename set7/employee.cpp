#include<iostream>
using namespace std;
class Home
{
	public:
		char name[100],add[100],n_father[100],n_mother[100];
		int age,h_member;
		
		void set()
		{
			cout<<"Name :";
			cin>>name;
			cout<<"Age :";
			cin>>age;
			cout<<"Address :";
			cin>>add;
			cout<<"Home member :";
			cin>>h_member;
			cout<<"Father Name :";
			cin>>n_father;
			cout<<"Mother Name :";
			cin>>n_mother;
		}
};
class Office
{
	public :
		char post[100];
		int ex,salary;
		
		void set()
		{
			cout<<"Position :";
			cin>>post;
			cout<<"Expirence :";
			cin>>ex;
			cout<<"Salary :";
			cin>>salary;		
		}	
};
class Employee : public Home,public Office
{
	public:
		
		void get()
		{
			cout<<"\n\n--------------------Employee information------------------------\n\n";
			cout<<"Name             :"<<name;
			cout<<"\nhAge           :"<<age;
			cout<<"\nAddress        :"<<add;
			cout<<"\nHome member    :"<<h_member;
			cout<<"\nFather Name    :"<<n_father;
			cout<<"\nMother Name    :"<<n_mother;
			cout<<"\nPosition       :"<<post;
			cout<<"\nExpirence      :"<<ex;
			cout<<"\nSalary         :"<<salary;
		}
};
main()
{
	Employee e1;
	
	e1.Home::set();
	e1.Office::set();
	e1.get();
}