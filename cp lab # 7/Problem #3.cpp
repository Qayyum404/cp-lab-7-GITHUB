#include<iostream>
using namespace std;
int sum(int a, int b);
float sum(float c, float d);
int main()

{

	int a, b;
	float c, d;
	cout << "Enter the first integer value=";
	cin >> a;
	cout << "\nEnter the second integer value=";
	cin >> b;
	cout << "Sum of " << a << " & " << b << " is = " << sum(a, b) << endl;
	cout << "\nEnter the first float value=";
	cin >> c;
	cout << "\nEnter the second float value=";
	cin >> d;
	cout << "Sum of " << c << " & " << d << " is = " << sum(c, d);

	return 0;
}
	int sum(int a , int b)
	{
		return a + b;
	}
	float sum(float c, float d)

	{
		return c + d;
	}