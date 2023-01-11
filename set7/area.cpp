#include<iostream>
using namespace std;
class Shape
{
	public:
	int w,h;
	
	void set()
	{
		cout<<"width :";
		cin>>w;
		cout<<"height :";
		cin>>h;	
	} 	
};
class Triangle : public Shape
{
	public:
	void area()
	{
		cout<<"-----------------------\n";
		cout<<"Triangle area :"<<w*h/2<<endl;
		cout<<"-----------------------\n";
	}
};
class Rectangle : public Shape
{
	public:
	void area()
	{
		cout<<"-----------------------\n";
		cout<<"Rectangle :"<<w*h<<endl;
		cout<<"-----------------------\n";
	}
};
main()
{
	Triangle t1;
	Rectangle r1;
	
	cout<<"----------triangle area-------------\n";
	t1.set();
	t1.Triangle::area();
	
	cout<<"\n----------rectangle area-------------\n";
	r1.set();
	r1.Rectangle::area();
} 