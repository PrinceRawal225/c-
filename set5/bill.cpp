#include<iostream>
using namespace std;
class Bill
{
	public:
		char user_id[100];
		int pw;
		int password=12345678;
		char i_name[100];
		int i_number,qty,tax,discount,price,count;

		void set()
		{
			cout<<"\n-------------please login for shopping--------------\n";
			cout<<"user :";
			cin>>user_id;
			cout<<"password :";
			cin>>pw;	
		}
		
			void verify()
			{
				if(password==pw)
				{
					count=2;
				}
				else
				{
					count=1;
				}
				
				switch(count)
				{
					case 2:
						cout<<"\nYour account is verify successfull\n";
						break;
						
					case 1:
						cout<<"\nYour account is verify not successfull\n"<<"try again..!!\n";
						break;
				}
			}
			
					void cart()
					{
					
					cout<<"item name :";
					cin>>i_name;
					cout<<"item number :";
					cin>>i_number;
					cout<<"quntity :";
					cin>>qty;
					cout<<"price :";
					cin>>price;
					cout<<"tax :";
					cin>>tax;
					cout<<"discount :";
					cin>>discount;
					}
					
					void bill()
					{
						
							cout<<i_number<<"\t"<<i_name<<"\t"<<qty<<"\t"
							<<price<<"\t"<<tax<<"\t"<<discount<<endl;
					}	
};

main()
{
	Bill b1,b2[100];
	int n,i,sum=0,sum1=0,c,j;
	b1.set();
	b1.verify();
			
		if(b1.count==2)
		{
				cout<<"\nenter total product:";
				cin>>n;
					cout<<"\n\n----------enter product details-----------\n";	
					for(i=1;i<=n;i++)
					{
				
						cout<<"\n"<<i<<".  ";
						b2[i].cart();	
					}

			cout<<"\n\n----------------Bill------------------\n";
			for(i=1;i<=n;i++)
			{
						b2[i].bill();
				sum=sum+b2[i].price;
				sum1=sum1+b2[i].discount;	
			}
		
		
				cout<<"\nTotal discount :"<<sum1<<endl;
				cout<<"\nTotal amount :"<<sum<<endl;
		
		}
}