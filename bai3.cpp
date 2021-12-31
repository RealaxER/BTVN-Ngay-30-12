#include<iostream>
using namespace std;

int main()
{
	int cc,gk,ck;
	float tb ;


	cout <<"\nNhap diem chuyen can:  ";
	cin >> cc;
	cout <<"\nNhap diem giua ki:  ";
	cin >> gk;
	cout <<"\nNhap diem cuoi :  ";
	cin >> ck;
	
	tb = cc*0.1 + gk*0.3 + ck*0.6;
	cout << "gia tri diem trung binh: " << tb;  
	
	if (tb < 5)
	{
		cout << "\nLoai D ";
	}
	
	else if (tb >= 5 && tb < 7)
	{
		cout << "\nLoai C ";
	}
 	else if (tb >= 7 && tb < 9 )
	{
		cout << "\nLoai B ";
	}
	else if (tb >= 9 )
	{
		cout << "\nLoai A ";
	}
	
	
}
