#include<iostream>
using namespace std;
class Height
{
	public:
	int i,f;
	
	void data()
	{
		cout<<"feet:";
		cin>>f;
		cout<<"inch:";
		cin>>i;	
	}
	
	void add(Height h2)	
	{
		int feet,inch;
		
		feet=f+h2.f;
		inch=i+h2.i;
		
		cout<<"\n*********final distance**********\n";
		feet=feet+(inch/12);
		inch=inch-((inch/12)*12);
		cout<<"feet:inch"<<endl<<feet<<":"<<inch;
	}
};
main()
{
	Height h1,h2;
	
	h1.data();
	h2.data();
	h1.add(h2);
}