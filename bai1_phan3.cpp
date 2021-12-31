#include<iostream>
using namespace std;

int main ()
{
	float a,b;

	cout << "\nSo thuc thu nhat: ";
	cin >> a;
	cout <<"\nSo thuc thu hai: ";
	cin >> b;
	if (a>b)
	{
		cout << "\nSo thuc thu ba: ";
		cin >> b;
		if(a>b)
		{
		cout << "\nSo thuc thu bon: ";
		cin >> b;
			if(a>b)
			{
				cout << "\nSo thu lon nhat la : " << a ;
			}
		}
		else 
		{
		cout << "\nSo thuc thu bon: ";
		cin >> a;
			if(a>b)
			{
				cout << "\nSo thu lon nhat la : " << a ;
			}
			else
			{
				cout << "\nSo thu lon nhat la : " << b ;
			}
		}
	}
	else
	{
		{
		cout << "\nSo thuc thu ba: ";
		cin >> a;
		if(a<b)
		{
		cout << "\nSo thuc thu bon: ";
		cin >> a;
			if(a<b)
			{
				cout << "\nSo thu lon nhat la : " << b ;
			}
		}
		else 
		{
		cout << "\nSo thuc thu bon: ";
		cin >> b;
			if(a<b)
			{
				cout << "\nSo thu lon nhat la : " << b ;
			}
			else
			{
				cout << "\nSo thu lon nhat la : " << a ;
			}
		}	
	}
	
}
}
