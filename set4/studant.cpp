#include<iostream>
using namespace std;
class Read
{
	public:
	char n[100],add[100];
	int role,std,contact;
	
	void setdata()
	{
		cout<<"\n*******enter student detail********\n";
		
		cout<<"name:";
		cin>>n;
		cout<<"stander:";
		cin>>std;
		cout<<"role number:";
		cin>>role;
		cout<<"contact:";
		cin>>contact;
		cout<<"address:";
		cin>>add;
	}
};
class Print
{
	public:

		
	void getdata(Read r1)
	{
			cout<<"name:"<<r1.n<<endl<<"i'd':"<<r1.role<<endl<<"stander:"<<r1.std<<endl<<"contact:"<<r1.contact<<endl
			<<"address:"<<r1.add;
	}
};
main()
{
	Read r1;
	Print p1;
	
	r1.setdata();
	cout<<"\n____________________\n";
	p1.getdata(r1);
}