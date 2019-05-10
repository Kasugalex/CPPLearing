#include <iostream>
using namespace std;
#include"_1_HelloWorld.h"
#include"_2_Pointer.h"
#include"_3_InlineFunc.h"
double Func(double,double);
int main() {

	//_1_HelloWorld h;
	//h.HelloWorld();

	_2_Pointer pointer;
	//pointer.PointerMove();
	//pointer.PointerMove2();
	//int intArray[] = { 1,2,3,4,5 };
	//pointer.PointerConst(intArray);

	//Î¯ÍÐ
	double (*ptrCalc)(double, double);
	ptrCalc = Func;
	ptrCalc(44,22);

	_3_InlineFunc* func = new _3_InlineFunc;
	double(_3_InlineFunc::*ptrCalc2)(double, double) =  &_3_InlineFunc::Func;
	
	(func->*ptrCalc2)(4,2);

	delete func;

	system("pause");
	return 0;

}

double Func(double d1, double d2) {
	cout << d1 - d2 << endl;
	return d1 - d2;
}