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
	//Խ��,�п���score1��score�ĵ�ַ�պ���ǰ�����Լ�4Խ��� ptr_score����ָ��score1��87
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
		//д *ptr_arrays++ �ᵼ�������ѭ�����������Ϊ++������Ὣ�Ӻ��ֵ��ֵ��*ptr_arrays �� +i����
		cout << *(ptr_arrays + i) << endl;

	}




	for (int i = 0; i < size2; i++)
	{

		cout << *(ptr_arrays + i) << endl;

	}

}
