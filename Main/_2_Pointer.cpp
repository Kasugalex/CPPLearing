#include "_2_Pointer.h"
#include <iostream>
using namespace std;

_2_Pointer::_2_Pointer()
{
}


_2_Pointer::~_2_Pointer()
{
}

void _2_Pointer::PointerMove()
{
	int i;
	double score1[5] = { 98,87,65,43,76 };
	double score[5] = { 98,87,65,43,76 };
	double * ptr_score;
	ptr_score = &score[1];
	ptr_score += 2;
	cout << *ptr_score << endl;
	ptr_score -= 3;
	cout << *ptr_score << endl;
	//越界,有可能score1和score的地址刚好在前后，所以减4越界后 ptr_score可能指向score1的87
	ptr_score -= 4;
	cout << *ptr_score << endl;
}

void _2_Pointer::PointerMove2()
{
	int arrays[] = { 20,40,60,80,100 };
	int * ptr_arrays = arrays;

	int ptrSize = sizeof(ptr_arrays);
	int arraySize = sizeof(arrays);
	int size  = sizeof(arrays) / sizeof( ptr_arrays);
	int size2 = sizeof(arrays) / sizeof(*ptr_arrays);
	for (int i = 0; i < size; i++)
	{
		//写 *ptr_arrays++ 会导致下面的循环溢出，是因为++运算符会将加后的值赋值给*ptr_arrays 而 +i不会
		cout << *(ptr_arrays + i) << endl;

	}




	for (int i = 0; i < size2; i++)
	{

		cout << *(ptr_arrays + i) << endl;

	}

}
