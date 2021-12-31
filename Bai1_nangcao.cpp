#include<iostream>
using namespace std;

int main ()
{
	int a,b,c,x;
	
	cout << "Nhap gia tri so duong : ";
	cin >> x ;
	
	a = x/100;
	cout << "\nGia tri so a : " << a;
	b= (x-a*100)/10;
	cout << "\nGia tri so b : " << b;
	c= (x-a*100-b*10);
	cout << "\nGia tri so b : " << c;
	
	if(a==1) 
	cout << "\nMot tram";
	if(a==2) 
	cout << "\nHai tram";
	else if(a==3) 
	cout << "\nBa tram";
	else if(a==4) 
	cout << "\nBon tram";	
	else if(a==5) 
	cout << "\nNam tram";	
	else if(a==6) 
	cout << "\nSau tram";
	else if(a==7) 
	cout << "\nBay tram";
	else if(a==8) 
	cout << "\nTam tram";
	else if(a==9) 
	cout << "\nChin tram";	
	
	if(b==1) 
	cout << " muoi";
	if(b==2) 
	cout << " hai muoi";
	else if(b==3) 
	cout << " ba muoi ";
	else if(b==4) 
	cout << " bon muoi";	
	else if(b==5) 
	cout << " nam muoi";	
	else if(b==6) 
	cout << " sau muoi";
	else if(b==7) 
	cout << " bay muoi";
	else if(b==8) 
	cout << " tam muoi";
	else if(b==9) 
	cout << " chin muoi";	
	
	if(b==0)
	{
		if(a==1) 
		cout << " linh mot";
		else if(a==2) 
		cout << " linh hai";
		else if(a==3) 
		cout << " linh ba ";
		else if(a==4) 
		cout << " linh bon";	
		else if(a==5) 
		cout << " linh nam";	
		else if(a==6) 
		cout << " linh sau";
		else if(a==7) 
		cout << " linh bay";
		else if(a==8) 
		cout << " linh tam";
		else if(a==9) 
		cout << " linh chin";	
	}
	else
	{
		if(a==1) 
		cout << " mot";
		else if(a==2) 
		cout << " hai";
		else if(a==3) 
		cout << " ba ";
		else if(a==4) 
		cout << " bon";	
		else if(a==5) 
		cout << " nam";	
		else if(a==6) 
		cout << " sau";
		else if(a==7) 
		cout << " bay";
		else if(a==8) 
		cout << " tam";
		else if(a==9) 
		cout << " chin";	
	}
	

	
}
