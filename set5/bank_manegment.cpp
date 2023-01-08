#include<iostream>
using namespace std;
class Bank
{
	private:
		char ch,choice,name[100],email[100];
		int phone,id;
		
	public:
		void home_page()
		{
			cout<<"\t\t\t-: BANK MANEGMENT SYSTEM :-\n";
			cout<<"\t_____________________________________________________________\n\n";
			cout<<"\t\t\t-: Design programme by :-\n";
			cout<<"\t_____________________________________________________________\n";
			cout<<"\t\t\t\tPrince R Rawal\n\n";
			cout<<"\t\t\t\t-: trainer :-\n";
			cout<<"\t_____________________________________________________________\n";
			cout<<"\t\t\t\tVidit Sir\n\n";
			cout<<"\t\t\tPress any key for continue......";
			cin>>ch;
			
			admin();
		}
		
		void admin()
		{
				cout<<"********************************************************************************\n";
				cout<<"\t-: Press 'A' to log in as aministrator or 's' to log in as staff :-";
				cin>>choice;
				cout<<"________________________________________________________________________________\n";
			if(choice=='S'||choice=='s')
			{
				cout<<"\t_____________________________________________________________\n\n";
				cout<<"\t\t\t\t-: Welcome as Staff :-\n";
				cout<<"\t________________________________________________________________\n\n";
				cout<<"\tEnter name of staff member :";
				cin>>name;
				cout<<"\tEnter the account number of staff :";
				cin>>id;
				cout<<"\tEnter the phone number of staff :";
				cin>>phone;
				cout<<"\tEnter the email of staff :";
				cin>>email;
				detail();
			}
			else if(choice=='a'||choice=='A')
			{
				cout<<"\t\t\t-: Welcome as aministrator :-\n";
				cout<<"\t________________________________________________________________\n\n";
				cout<<"\tEnter name of member :";
				cin>>name;
				cout<<"\tEnter the phone number of staff :";
				cin>>phone;
				cout<<"\tEnter the email of staff :";
				cin>>email;
				
				cout<<"\n\n\t\tyour account is open successful..!!\n";
			}
		}
		
		void detail()
		{
			int no,amount=100000,enter,upi;
			
			cout<<"\n\n\t_____________________________________________________________\n";
			cout<<"\tName              :"<<name<<endl;
			cout<<"\tAccount no        :"<<id<<endl;
			cout<<"\tPhone no          :"<<phone<<endl;
			cout<<"\tE-mail            :"<<email<<endl;
			cout<<"\t_____________________________________________________________\n\n";
			
			cout<<"\t\t\tPress [1] to deposite the money :\n";
			cout<<"\t\t\tPress [2] to transfer the money :\n";
			cout<<"\t\t\tPress [3] to withdraw the money :";
			cin>>no;
			switch(no)
			{
				case 1:
					cout<<"        --------------------------------------------------------------\n";
					cout<<"\tEnter the deposite money :";
					cin>>enter;
					cout<<"        --------------------------------------------------------------\n";
					cout<<"\n  \tyour actual amount is :"<<amount;
					cout<<"\n\n   \tcongrate your amount has diposite successfully.\n";
					cout<<"\n  \tyour Total amount is :"<<amount+enter;
					break;
					
				case 2:
					cout<<"     ------------------------------------------------------------------------\n";
					cout<<"\tEnter the transfer money :";
					cin>>enter;
					cout<<"\tEnter the A/C number :";
					cin>>upi;
					cout<<"     ------------------------------------------------------------------------\n";
					cout<<"\n  \tyour actual amount is :"<<amount;
					cout<<"\n\n   \tcongrate your amount has transfer successfully.\n";
					cout<<"\n  \tyour Total amount is :"<<amount-enter;
					break;
					
				case 3:
					cout<<"     ------------------------------------------------------------------------\n";
					cout<<"\tEnter the withdraw money :";
					cin>>enter;
					cout<<"     ------------------------------------------------------------------------\n";
					cout<<"\n  \tyour actual amount is :"<<amount;
					cout<<"\n\n   \tcongrate your amount has withdraw successfully.\n";
					cout<<"\n  \tyour Total amount is :"<<amount-enter;
					break;
					break;
			}
		}	
};
main()
{
	Bank b1;
	
	b1.home_page();
}