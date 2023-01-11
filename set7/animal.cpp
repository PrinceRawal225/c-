#include<iostream>
using namespace std;
class Animal
{
	public:
		int age;
		char name[100];
		
		void set()
		{
			cout<<"Name :";
			cin>>name;
			cout<<"Age :";
			cin>>age;
		}
};
class Zebra : public Animal 
{
	public:
		
	void get()
	{
		cout<<"Name :"<<name<<"\nAge :"<<age<<endl;
		cout<<"Zebras are single-hoofed animals that are native to Africa.\n Zebras are very closely related to horses and donkeys";	
	}	
};
class Dolphin : public Animal
{
	public :
	void get()
	{
		cout<<"Name :"<<name<<"\nAge :"<<age<<endl;
		cout<<"A dolphin is an aquatic mammal within the infraorder Cetacea.\n Dolphin species belong to the families Delphinidae (the oceanic dolphins),\n Platanistidae (the Indian river dolphins), Iniidae (the New World river dolphins)\n\n";
	}
};
main()
{
	Zebra z1;
	Dolphin d1;
	
	cout<<"------dolphin-------\n";
	d1.set();
	cout<<"\n------zebra--------\n";
	z1.set();
	

	cout<<"\n*************Dolphin************\n";
	d1.Dolphin::get();	
	

	cout<<"\n*************Zebra************\n";	
	z1.Zebra::get();
	
}