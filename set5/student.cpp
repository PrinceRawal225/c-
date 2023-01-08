#include<iostream>
using namespace std;
class Student
{
	private:
		char name[100],add[100],email[100];
		int id,std,contact;
		
	public:
		void set()
		{
			cout<<"name: ";
			cin>>name;
			cout<<"standard: ";
			cin>>std;	
			cout<<"i'd': ";
			cin>>id;
			cout<<"contact: ";
			cin>>contact;
			cout<<"email: ";
			cin>>email;
			cout<<"address: ";
			cin>>add;
			
		}
		
		void get()
		{
			
			cout<<name<<"\t"<<std<<"\t"<<id<<"\t"<<contact<<"\t"<<email<<"\t"<<add<<"\t"<<endl;	
		}	
};
main()
{
	Student s1[100];
	int n,i,count=1;
	
	cout<<"\nenter total student number:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout<<"\n"<<count<<endl;
		s1[i].set();
		count++;
	}
	
	cout<<"\n\n**************student detail***************\n";
	
	for(i=1;i<=n;i++)
	{
		s1[i].get();
	}
}