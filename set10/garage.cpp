/*
 Write a "Garage" class that has a "Car" that is having troubles with its "Motor".
 Use a function-level try block in the "Garage" class constructor to catch an exception 
 (thrown from the "Motor" class) when its "Car" object is initialized.
 Throw a different exception from the body of the "Garage" constructor s handler and catch it in main( ).
*/
#include<iostream>
using namespace std;
class Garage
{
	public:
		Garage(int b)
		{
			try
			{
				throw b;
			}
			catch(...)
			{
				cout<<"Car Repaired.."<<endl;
			}
		}	
};
class Car
{
	public:
	Car(int a)
	{
		Garage g1(a);
	}
};

class Motor 
{
	public:
		Motor()
		{
			throw Car(100);
		}	
};

main()
{
	Motor m1;
}