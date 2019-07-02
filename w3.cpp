#include<iostream>
#include<string>
#include<ctime>
#include<math.h>
using namespace std;
int main()
{
	/*string Name;
	int Age;
	cout << "program introduce myself" << endl; 
	cout << "Enter name : ";
	//cin >> Name;
	getline(cin, Name);//เป็นฟังก์ชั่นที่ทำให้เคาะspace กี่ครั้งก็ได้และค่อยรับค่าตัวต่อไป ใช้โดยgetline(cin,ตัวแปร)
	cout << "Enter age : ";
	cin >> Age;
	cout << "\nHello," << Name << "." << endl;
	cout << "You have " << Age << "year old. " << endl;
	cout << "You are beginner programmer." << endl;
	cout << "------------------------------------------\n" ;
	/*return(0);*/


//โปรแกรมรับค่าเงินบาทแล้วแปลงเงินเป็นดอลล่า และยูโร

	/*float thb;
	cout << "program exchange Baths to global" << endl; 
	cout << "Enter Baths :";
	cin >> thb; 
	cout << thb << " Baths is : " << thb/30.578 << " Dollars."<< endl;
	cout << thb << " Baths is : " << thb/34.2615 << " Euro." << endl;
	cout << thb << " Baths is : " << thb/27.8056 << " Jpy." << endl;
	cout << thb << " Baths is : " << thb/4.3790 << " Cny." << endl;
	cout << thb << " Baths is : " << thb/0.1306 << " Vnd." << endl;
	time_t t;
	time(&t);
	cout << "This rate update at " << ctime(&t) << endl;
	cout << "------------------------------------------\n" ;
	/*return(0);*/

//โปรแกรมคำนวณหาพื้นที่รูปสี่เหลี่ยมผืนผ้า
	/*int L,W;
	cout << "program caculate Rectangle" << endl; 
	cout << "Enter Length : ";
	cin >> L;
	cout << "Enter Width : ";
	cin >> W;
	cout << "Area of Rectagle = " << L*W <<endl;
	cout << "------------------------------------------\n" ;
	/*return(0);*/

//โปรแกรมหาพื้นที่ของรูปวงกลม
	/*float cir;
	cout << "program calculate circle" << endl; 
	cout << "Circle radius (real number) ? ";
	cin >> cir;
	cout << "Area of circle with radius " << cir << " is " << 3.1415*cir*cir << endl;
	cout << "Circumference is " << 2*3.1415*cir << endl;
	cout << "***************End all program****************\n" ;
	/*return(0);*/

//โปรแกรมคำนวณโจทย์
	/*double x;
	cout << "22x+1 + 12(2)x +16 = 0 **What number of x**\n" ;
	cout << "Enter X for caculate : ";
	cin >> x;
	cout << "Your x is " << x << endl;
	cout << "Real x in equation : " << pow(2.0,2.0*x+1.0)+pow(2.0,x)*12+16 << endl;*/
	//return(0);
//โปรแกรมเช็คค่าความจริง
	/*int i1,i2;
	cout << "Enter first number :";
	cin >> i1;
	cout << "Enter second number :";
	cin >> i2;
	cout << "\nTesting usage operator\n";
	cout << "==========================\n";
	cout << "First number && Second number = " << (i1 && i2) << endl;
	cout << "First number || Second number = " << (i1 || i2) << endl;*/
	
	//return(0);

//โปรแกรมเเสดงฟังก์ชัน A++
	/*int A,B;
	cout << "Enter first number(A) :";
	cin >> A;
	cout << "Enter second number(B) :";
	cin >> B;
	cout << endl;
	cout << "Before A = " << A << endl;
	cout << "++A = " << ++A << endl;
	cout << "After A = " << A << endl;
	cout << "------------------------\n";
	cout << "Before A = " << A << endl;
	cout << "A++ = " << A++ << endl;
	cout << "After A = " << A << endl;
	cout << "------------------------\n";
	cout << "Before B = " << B << endl;
	cout << "--B = " << --B << endl;
	cout << "After B = " << B << endl;
	cout << "------------------------\n";
	cout << "Before B = " << B << endl;
	cout << "B-- = " << B-- << endl;
	cout << "After B = " << B << endl;*/
	//return(0);
//โปรแกรมเเสดงตัวดำเนินการ
	/*int Number;
	cout << "Enter number : ";
	cin >> Number;
	cout << Number << " is " << ((Number % 2) == 0? "even":"odd") ;
	cout << " number. " << endl;*/
	//return(0);
//โปรแกรมตัดสินรูปภาพ
	/*int W;
	cout << "Enter Weight : ";
	cin >> W;
	cout << W << " is " << ((W < 55) == 0? "flat":"slim") << endl;//รูปแบบคือ ((น้ำหนัก มากกว่า 55 ไหม) ==ถ้าเท่ากับ 0? 0=ค่าเท็จ "ถ้ากรณี1จริง":"ถ้ากรณี1เท็จ")
	//cout << " number. " << endl;*/
	//return(0);
//โปรแกรมแปลงอุณหภูมิ
	float T=0,TF;
	cout << "Enter Celsius temperature : " ;
	cin >> T;
	TF = T*1.8+32;
	cout << "Fahrenheit = " << TF << endl;
	cout << "Now weather in Thailand is " << ((TF < 70) ==0? "Hot":"Cool") << endl;
	return(0);
} 