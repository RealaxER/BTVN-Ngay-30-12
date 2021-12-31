#include<iostream>
using namespace std;

int main ()
{
	int a,b,c;
	
	cout << "Hay nhap gia tri a: ";
	cin >> a;
	cout << "Hay nhap gia tri b: ";
	cin >> b;
	cout << "Hay nhap gia tri c: ";
	cin >> c;
	
	if(a<b)
	{
		if(a<c)
			cout << "a la so nho nhat";
		else
			cout << "c la so nho nhat";
	}
	else
	{
		if(c>a)
		cout << "b la so nho nhat";
	}
}
