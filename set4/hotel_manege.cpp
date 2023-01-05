#include<iostream>
#include<string.h>
using namespace std;
class Hotel
{
	private:
	char n[100],type[100],add[100],web[100];
	int id,staff,room,e_year,rating;
	
	public:
	
	void setdata(char n[],char type[],char add[],char web[],int id,int staff,int room,int e_year,int rating)
	{
			strcpy(this->n,n);
			strcpy(this->type,type);
			strcpy(this->add,add);
			strcpy(this->web,web);
			this->id=id;
			this->staff=staff;
			this->room=room;
			this->e_year=e_year;
			this->rating=rating;
	}	
	
	void getdata()
	{
		cout<<n<<endl<<type<<endl<<add<<endl<<web<<endl<<id<<endl<<staff<<endl<<room<<endl<<e_year<<endl<<rating<<endl;		
	}
};
main()
{
	Hotel h1;
	char n[100],type[100],add[100],web[100];
	int id,staff,room,e_year,rating;
	
	cout<<"name:";
	cin>>n;
	cout<<"hotal type:";
	cin>>type;
	cout<<"address:";
	cin>>add;
	cout<<"website:";
	cin>>web;
	cout<<"id:";
	cin>>id;
	cout<<"staff_size:";
	cin>>staff;
	cout<<"room_size:";
	cin>>room;
	cout<<"establish_year:";
	cin>>e_year;
	cout<<"rating:";
	cin>>rating;

	h1.setdata(n,type,add,web,id,staff,room,e_year,rating);
	cout<<"\n*******************hotel detail*************************\n";
	h1.getdata();
}