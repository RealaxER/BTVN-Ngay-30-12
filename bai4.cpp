#include<iostream>
using namespace std;

int main()
{
	int a,b;
	float x;
	
	cout << "Hay nhap gia tri a: ";
	cin >> a;
	cout << "Hay nhap gia tri b: ";
	cin >> b;
	
	if(a==0)
	{
		if(b>0)
		cout << "pt co vo so nghiem";
		else 
		cout << "pt vo nghiem";
	}
	else
	{
		cout << "pt co 1 nghiem : x = " << (float)b/a;
	}
}
