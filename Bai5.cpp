#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a;
	int b;
	int  c;
	
	float x;
	float denta;
	
	cout << "Nhap gia tri a: " ;
	cin >> a;
	cout << "Nhap gia tri b: " ;
	cin >> b;
	cout << "Nhap gia tri c: " ;
	cin >> c;
	
	denta = b^2 - 4*a*c;
	
	if(a==0)
	{
		if(b==0)
		{
			cout << "pt vo nghiem";
		}
		else
		{
			cout << "pt co 1 nghiem: x= " << -c/b;
		}			
	}
	else
	{
		
		if(denta>0)
		{
			cout << "pt co 2 nghiem phan biet x1 = " <<(float)(-b+sqrt(denta))/(2*a);
		}
		else if(denta<0)
		{
			cout << "pt da cho vo nghiem";
		}
		else
		{
			cout << "pt co nghiem kep : x = " << (float) -b/a;
		}
		
		
	}
}
