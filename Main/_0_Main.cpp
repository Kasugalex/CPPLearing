#include <iostream>
using namespace std;
#include"_1_HelloWorld.h"
#include"_2_Pointer.h"

double Func(double,double);
int main() {

	//_1_HelloWorld h;
	//h.HelloWorld();

	_2_Pointer pointer;
	//pointer.PointerMove();
	//pointer.PointerMove2();
	//int intArray[] = { 1,2,3,4,5 };
	//pointer.PointerConst(intArray);
	//pointer.Func(2, 1);
	//函数指针，类似委托
	double (*ptrCalc)(double, double);
	ptrCalc = Func;
	ptrCalc(44,22);



	system("pause");
	return 0;

}

double Func(double d1, double d2) {
	cout << d1 - d2 << endl;
	return d1 - d2;
}