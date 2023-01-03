//vowels or consonat

#include<iostream>
using namespace std;
main()
{
	char a;
	
	cout<<"enter the any one charecter:=";
	cin>>a;
	
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"charecter is vowels.";
	}
	else
	{
		cout<<"charecter is consonant.";
	}
}