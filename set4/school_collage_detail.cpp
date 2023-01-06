#include<iostream>
using namespace std;
class School
{
	public:
	static	int  roll_no,standard,age,contact;
	static	char name[100],add[100];
		
		static void set()
		{
			cout<<"\n*********school studant details***********\n";
			cout<<"name:";
			cin>>name;
			cout<<"standard:";
			cin>>standard;
			cout<<"roll no:";
			cin>>roll_no;
			cout<<"age:";
			cin>>age;
			cout<<"address:";
			cin>>add;
			cout<<"contact:";
			cin>>contact;
			
		}
		
		static void get()
		{
			cout<<"\n*********school studant details***********\n";
		//	cout<<"NAME\t\t"<<"standard\t"<<"roll_no\t"<<"age\t"<<"contact\t\t"<<"address\t\t\t"<<endl;
			
			cout<<name<<"\t\t"<<standard<<"\t"<<roll_no<<"\t"<<age<<"\t"<<contact<<"\t\t"<<add<<"\t"<<endl;
		}
};

int School::roll_no;
int School::standard;
int School::age;
int School::contact;
char School::name[100];
char School::add[100];

class collage
{
	public:
	static	int id,age,contact;
	static	char name[100],add[100],col_name[100];
	
	static void set()
	{
		cout<<"\n*********collage studant details***********\n";
		cout<<"name:";
		cin>>name;
		cout<<"collage name:";
		cin>>col_name;
		cout<<"age:";
		cin>>age;
		cout<<"id:";
		cin>>id;
		cout<<"contact:";
		cin>>contact;
		cout<<"address:";
		cin>>add;
	}
	
	static void get()
	{
		cout<<"\n*********collage studant details***********\n";
		
		cout<<"NAME\t\t"<<"collage_name\t\t"<<"id\t"<<"age\t"<<"contact\t\t"<<"address\t\t\t"<<endl;
			
		cout<<name<<"\t\t"<<col_name<<"\t"<<id<<"\t"<<age<<"\t"<<contact<<"\t\t"<<add<<"\t"<<endl;
	}
};

int collage::age;
int collage::id;
int collage::contact;
char collage::name[100];
char collage::add[100];
char collage::col_name[100];

main()
{
	School::set();
		collage::set();
	School::get();
	

	collage::get();	
}