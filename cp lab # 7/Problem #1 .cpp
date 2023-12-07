
#include<iostream>
using namespace std;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()

{
	int a, b;

	cout << "Before swapping:";
	cout << "\nEnter the value of a: ";
	cin >> a;
	cout << "\nEnter the value of b: ";
	cin >> b;

	swap(a, b);
	cout << "\nAfter Swapping:";
	cout << "\n Value of a after exchange is \n" <<"num1 :" << a;
	cout << "\n num2: " << b;
	return 0;
}