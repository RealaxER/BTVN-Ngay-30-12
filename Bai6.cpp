#include<iostream>
using namespace std;

int main ()
{
	int t,n;
	
	cout << "Nhap thang: " ;
	cin >> t;
	
	cout << "Nhap nam: ";
	cin >> n;
	
	if (t==4 || t==6||t==9 || t==11)
	{
		cout << "Thang " << t << " co 30 ngay";
	}
	else if (t==2)
	{
		if(n%4==0)
		{
			cout << "Thang " << t << " co 29 ngay";
		}
		else 
		{
			cout <<"Thang " << t << " co 28 ngay";
		}
	}
	else if (t== 1||t==3||t==5||t==7||t==8||t==10||t==12)
	{
		cout << "Thang " << t << " co 31 ngay";
	}
}

