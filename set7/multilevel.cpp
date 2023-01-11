
#include<iostream>
using namespace std;
class A
{
	public:
		char role[100],name[100],com_name[100],add[100],email[100];
		int id,salary,ex,contact;
		
		void set()
		{
			cout<<"Name :";
			cin>>name;
			cout<<"ID :";
			cin>>id;
			cout<<"Role :";
			cin>>role;
		}
};
class B : public A
{
	public:
		void set()
		{
			cout<<"salary :";
			cin>>salary;
			cout<<"expirence :";
			cin>>ex;
		}
};
class C :public B
{
	public:
		
		void get()
		{
			cout<<"\n\n******common details*******\n";
			cout<<"Name   :"<<name<<endl;
			cout<<"Role   :"<<role<<endl;
			cout<<"Salary :"<<salary<<endl<<endl;
		}
		
		void set()
		{
			cout<<"company name :";
			cin>>com_name;
			cout<<"Address :";
			cin>>add;
		}
};
class D :public C
{
	public:
		void set()
		{
			cout<<"Email :";
			cin>>email;
			cout<<"Contact :";
			cin>>contact;
		}
		//(id,role,name)  (salary,expirence)   (company name,address)   (email,contact)
		void get()
		{
			cout<<"\n\n---------------employee details--------------------\n\n";
			cout<<"Name           :"<<name<<endl;
			cout<<"Id             :"<<id<<endl;
			cout<<"Role           :"<<role<<endl;
			cout<<"company name   :"<<com_name<<endl;
			cout<<"address        :"<<add<<endl;
			cout<<"Salary         :"<<salary<<endl;
			cout<<"Expirence      :"<<ex<<endl;
			cout<<"Email          :"<<email<<endl;
			cout<<"Contact        :"<<contact<<endl;
		}
};
main()
{
	D d1;
	d1.A::set();
	d1.B::set();
	d1.C::get();
	d1.C::set();
	d1.set();
	d1.get();	
}