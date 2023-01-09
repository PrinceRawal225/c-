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
		
			int verify()
			{
				if(password==pw)
				{
					cout<<"\nYour account is verify successfull\n";
					return 1;
				}
				else
				{
					cout<<"\nYour account is verify not successfull\n"<<"try again..!!\n";
					return 0;
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
	Bill b1,b2[100],c;
	int n,i,sum=0,sum1=0,j,value;
	b1.set();
	value=b1.verify();
			
		if(value==1)
		{
				cout<<"\nenter total product:";
				cin>>n;
					cout<<"\n\n----------enter product details-----------\n";	
					for(i=0;i<n;i++)
					{
				
						cout<<"\n"<<i+1<<".  ";
						b2[i].cart();	
					}

			cout<<"\n\n----------------Bill------------------\n";
			
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(b2[i].i_number>b2[j].i_number)
					{
						c=b2[j];
						b2[j]=b2[i];
						b2[i]=c;
					}
				}
			}
			for(i=0;i<n;i++)
			{
						b2[i].bill();
				sum=sum+b2[i].price;
				sum1=sum1+b2[i].discount;	
			}
		
		
				cout<<"\nTotal discount :"<<sum1<<endl;
				cout<<"\nTotal amount :"<<sum<<endl;
		
		}
}