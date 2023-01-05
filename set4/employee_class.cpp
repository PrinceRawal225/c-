#include<iostream>
using namespace std;
class Employee
{
	private:
	char name[100],add[100],email[100],role[100];
	int id,salary,expirence,contact;
	
	public:
		void setdata()
		{
			cout<<"name:";
			cin>>name;
			cout<<"role:";
			cin>>role;
			cout<<"expirence:";
			cin>>expirence;
			cout<<"address:";
			cin>>add;
			cout<<"email:";
			cin>>email;
			cout<<"i'd:";
			cin>>id;
			cout<<"salary:";
			cin>>salary;
			cout<<"contact:";
			cin>>contact;
		}
		
		void getdata()
		{
			cout<<"\n____________________________________________________________________________\n";
			cout<<"name:"<<name<<endl<<"role:"<<role<<endl<<"expirence:"<<expirence<<endl<<"email:"<<email
			<<"i'd:"<<id<<endl<<"salary:"<<salary<<endl<<"contact:"<<contact<<endl<<endl;
			cout<<"\n____________________________________________________________________________\n";
		}
};
main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.setdata();
	e1.getdata();
	
	e2.setdata();
	e2.getdata();
	
	e3.setdata();
	e3.getdata();
	
	e4.setdata();
	e4.getdata();
	
	e5.setdata();
	e5.getdata();	
}