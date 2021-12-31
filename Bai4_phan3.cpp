#include<iostream>
using namespace std;

int main()
{
	int t,n;
	do
	{

	cout << "\nNhap vao t: ";
	cin >> t;
	((t>12)||(t<0))? cout << "Hay nhap gia tri thang nho hon 12 lon hon 0": cout << "";
	}
	while((t>12)||(t<0));
	
	cout << "Nhap vao n: ";
	cin >> n;

	
	(t==2)
	?((n%4==0) 
		?cout << "Thang " << t << " co 29 ngay"
		:cout << "Thang" << t << " co 28 ngay")
	:((t==4)||(t==6)||(t==9)||(t==11)
		?cout << "thang " << t << " co 30 ngay"
		:cout << "thang " << t << " co 31 ngay");
		
}
