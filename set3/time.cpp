#include<iostream>
using namespace std;
class Time
{
	public :
		
	int h,m,s;
	
	void data()
	{
		cout<<"hour:";
		cin>>h;
			
		cout<<"minute:";
		cin>>m;
	
		cout<<"second:";
		cin>>s;
	}
	
	void add(Time t2)
	{
		int hour,min,sec;
		hour=h+t2.h;
		min=m+t2.m;
		sec=s+t2.s;
		
		//sec to min
		min=min+(sec/60);
		sec=sec-((sec/60)*60);
		
		//min to sec
		hour=hour+(min/60);
		min=min-((min/60)*60);
	
	//	cout<<hour<<min<<endl<<sec;
		
		cout<<"\ncurrect time"<<hour<<":"<<min<<":"<<sec;
	}
};
main()
{
	Time t1,t2;
	cout<<"\n******1 time*******\n";
	t1.data();
	cout<<"\n******2 time*******\n";
	t2.data();
	t1.add(t2);
}