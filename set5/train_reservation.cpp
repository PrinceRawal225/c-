#include<iostream>
using namespace std;
class Train
{
	private:
	char t_name[100],destination1[100],destination2[100];
	int t_number;
	
	public:
		void set()
		{
			cout<<"\n-----------Enter train detail-----------\n";
			cout<<"(14702,14708,16210,14707 train is avilable.)\n";
			cout<<"train number:";
			cin>>t_number;
			cout<<"train name:";
			cin>>t_name;
			cout<<"from:";
			cin>>destination1;
			cout<<"to:";
			cin>>destination2;
			
		}
		
		void get()
		{
			cout<<"\n---------------Train details-----------------\n";
			switch(t_number)
			{
				case 14702:
					cout<<"\nAravali express\n"<<"Time :1 am\n"<<"Bandra tarminal --> shri ganganagar\n"
					<<"this train ticket avilable.\n";
					cout<<"\n*************Happy journay*************\n";
					break;
					
				case 16210:
					cout<<"\nAjmer express\n"<<"Time :10 pm\n"<<"Mysuru juncation --> Ajmer juncation\n"
					<<"AC coach ticket avilable.\n";
					cout<<"\n*************Happy journay*************\n";
					break;
				
				case 14708:
					cout<<"\nDadar Bikaner express\n"<<"Time :5 pm\n"<<"Dadar western --> Bikaner juncation\n"
					<<"this train ticket avilable.\n";
					cout<<"\n*************Happy journay*************\n";
					break;
					
				case 14707:
					cout<<"\nRanakpur express\n"<<"Time :7:50 am\n"<<"Bikaner juncation --> Dadar western\n"
					<<"this train ticket not avilable.\n";
					cout<<"\n*************Happy journay*************\n";
					break;
					
				default:
					cout<<"\nenter invalid train number...!!!";	
			}
			
			
		}
};
main()
{
	Train t1;
	
	t1.set();
	t1.get();
}