#include<iostream>
using namespace std;
int areasquare(int a);
float arearectangle(float a,float b);
float areacircle(float a);

int main()
{
	int choice=0;
	cout << "Press 1 for area of square.\nPress 2 for area of rectangle. \nPress 3 for area of circle.\n";
	cout << "Enter your choice : ";
	cin >> choice;
	if (choice == 1)
	{
		int a;
		cout << "Enter your lenght : ";
		cin >> a;
		cout<<"The area of the square is "<<areasquare( a);

	}
	else if (choice == 2)
	{
		int b,d;
		cout << "Enter your lenght : ";
		cin >> b;
		cout << "Enter your breath : ";
		cin >> d;
		cout << "The area of the rectangle is " << arearectangle(b,d);
	}
	else if (choice == 3)
	{
		int e;
		cout << "Enter your  radius :  ";
		cin >> e;
		cout << "The area of the circle is " << areacircle(e);
	}
	else
	{
		cout << "INVALID INPUT." << endl;
	}
	return 0;
}
int areasquare(int a)
{
	
	return a * a;
}
float arearectangle(float a,float b)
{
	
	 
	return a*b;


}
float areacircle(float a)
{
	
	float const pi = 3.412;
	return pi*a*a ;
}