#include<iostream>
using namespace std;
class Time
{
	public:
		
	int s;
	
	void data()
	{
		cout<<"enter the second:";
		cin>>s;
	}
	
	void watch()
	{
		int m=0,h=0;
		
		//second to minute
		m=m+(s/60);
		s=s-((s/60)*60);
		
		//minute to hour
		h=h+(m/60);
		m=m-((m/60)*60);
		
		cout<<"\n*******REAL TIME*********\n";
		cout<<h<<":"<<m<<":"<<s;
	}
};
main()
{
	Time t1;
	t1.data();
	t1.watch();
}