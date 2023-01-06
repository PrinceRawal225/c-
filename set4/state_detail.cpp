#include<iostream>
using namespace std;
class India
{
	private:
	static int no;
	
	public:
	static void set()
	{
		cout<<"press '1' for gujarat\npress '2' for rajsathan\npress '3' for punjab";
		
		cout<<"\nEnter number:";
		cin>>no;
		
	
	}
	
	static void get()
	{
			switch(no)
		{
			case 1:
			cout<<"\n****GUJARAT****\n";
			cout<<"LANGUAGE: gujrati\n";
			cout<<"DANCE: garba\n";
			cout<<"population: 6.27cr\n";
			break;
			
			case 2:
			cout<<"\n****rajsathan****\n";
			cout<<"LANGUAGE: rajsathani\n";
			cout<<"DANCE: ghoomer\n";
			cout<<"population: 5.65cr\n";
			break;
			
			case 3:
			cout<<"\n****punjab****\n";
			cout<<"LANGUAGE: punjabi\n";
			cout<<"DANCE: bhagda\n";
			cout<<"population: 3.17cr\n";
			break;	
		}	
	}
};

int India::no;

main()
{
	India::set();
	India::get();
}