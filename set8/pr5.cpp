// WAP to create an Class Shape. Make two sub-class Circle and Triangle which implements a method from Shape class called getArea().
#include<iostream>
using namespace std;
class Shape
{
	public:
		int base,height;
		float redius;
		virtual void set();
		
};
class Triangle :public Shape
{
	public:
	void set()
	{
			cout<<"\n--------enter triangle value---------\n";
			cout<<"base :";
			cin>>base;
			cout<<"height :";
			cin>>height;	
		cout<<"\nTriangle area :"<<base*height/2<<endl;
	}
};
class Circle :public Shape
{
	public:
		void set()
		{	
			cout<<"\n--------enter circle value---------\n";
			cout<<"redius :";
			cin>>redius;
			cout<<"\nCircle area :"<<(22*redius*redius)/7<<endl;
		}
};
main()
{
	Shape *s1,*s2;
	Triangle t1;
	Circle c1;

	s1=&t1;
	s2=&c1;
	
	s1->set();
	s2->set();

}