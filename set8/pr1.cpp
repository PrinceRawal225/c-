

#include<iostream>
#include<string>
using namespace std;
class Message
{
	private:
		char m[100];
		
	public:
			char m1[100];
		Message()
		{
			int i;
			cout<<"Enter the massage:";
			cin>>m1;
			
			strcpy(m,m1);
		}	
		
		void print()
		{
			cout<<"\n"<<m1<<endl;
		}
		
		void print(int a)
		{
			cout<<"\n----------------------------------------------\n";
			cout<<"string :"<<m1<<"\ninternal string :"<<m<<endl;
		}
			
};
main()
{
	Message m1;
	m1.print();
	m1.print(1);
}