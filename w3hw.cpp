//โปรแกรมแปลงอุณหภูมิ
#include<iostream>
using namespace std;
int main()
{
	float T=0,TF;
	cout << "Enter Celsius temperature : " ;
	cin >> T;
	TF = T*1.8+32;
	cout << "Fahrenheit = " << TF << endl;
	cout << "Now weather in Thailand is " << ((TF < 70) ==0? "Hot":"Cool") << endl;
	return(0);
} 