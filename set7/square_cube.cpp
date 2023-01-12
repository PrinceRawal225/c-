#include<iostream>
using namespace std;
class Number
{
	public:
		int no;
		
		void set()
		{
			cout<<"enter the number :";
			cin>>no;	
		}	
};
class Square :public Number
{
	public:
		void square()
		{
			cout<<"Square :"<<no*no<<endl;
		}
};
class Cube :public Number
{
	public:
		void cube()
		{
			cout<<"Cube :"<<no*no*no<<endl;
		}
};
main()
{
	Square s1;
	Cube c1;
	
	s1.set();
	s1.square();
	c1.set();
	c1.cube();	
}