#include<iostream>
using namespace std;
class Train
{
	private:
	char t_name[100],destination1[100],destination2[100];
	
	public:
	int t_number;
		void set()
		{
			cout<<"\n-----------Enter train detail-----------\n";
			//cout<<"(14702,14708,16210,14707 train is avilable.)\n";
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
		//	cout<<"\n---------------Train details-----------------\n";
				cout<<t_number<<"\t"<<t_name<<"\t"<<destination1<<"------>"<<destination2<<endl;
		}
};
main()
{
	Train t1[100];
	int i,n,search;
	cout<<"enter the total number for train:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		t1[i].set();
	}
	for(i=0;i<n;i++)
	{
		t1[i].get();
	}
	cout<<"\nenter search no:";
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(search==t1[i].t_number)
		{
		t1[i].get();
		}
	}
	

}
/*switch(t_number)
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
			
		
*/