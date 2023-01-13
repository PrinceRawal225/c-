
#include<iostream>
using namespace std;
class Member
{
	public:
		void prince()
		{
			cout<<"Name      : Prince rawal"<<endl;	
		}
		
		void prince(int a)
		{
			cout<<"age       : 17year"<<endl;
		}
		
		void prince(int a,int b)
		{
			cout<<"course    : Master in flutter"<<endl;
		}
		
		void prince(int a,int b,int c)
		{
			cout<<"Institute : Red & White"<<endl;
			cout<<c;
		}
};
main()
{
	Member m1;
	m1.prince();
	m1.prince(1);
	m1.prince(1,2);
	m1.prince(1,2,3);
}