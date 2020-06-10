// Giai_PT_Bac_Hai.cpp
//Chuong trinh giai phuong trinh bac hai
//Author: Pham Nguyen Thuy Trang
//Create date: 09/06/2020

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	double delta;
	cout << "Chuong trinh Giai Phuong trinh bac hai co dang: ax^2 + bx + c = 0" << endl;
	cout << "Moi ban nhap cac he so a, b, c" << endl;
	cin >> a >> b >> c;
	delta = pow(b, 2) - 4 * a * c;
	if (delta < 0)
		cout << "Phuong trinh vo nghiem" << endl;
	else if (delta == 0) {
		cout << "Phuong trinh co nghiem kep" << endl;
		cout << "x = " << (-b) / (2 * a);
	}
	else {
		cout << "Phuong trinh co hai nghiem phan biet" << endl;
		cout << "x1 = " << ((-b) + sqrt(delta)) / (2 * a) << endl;
		cout << "x2 = " << ((-b) - sqrt(delta)) / (2 * a) << endl;
	}
	return 0;
}

