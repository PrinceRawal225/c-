#include<iostream>
using namespace std;
class Mother
{
	public:
		void display()
		{
			cout<<"my mother name is sonal ben."<<endl;
		}
};
class Daugther : public Mother
{
	public:
		void display()
		{
			cout<<"my daugther name is sakshi."<<endl;
		}
};
main()
{
	Daugther d1;
	
	d1.Mother::display();
	d1.display();
}