#include "_3_InlineFunc.h"
using namespace std;
#include <iostream>


_3_InlineFunc::_3_InlineFunc()
{
}


_3_InlineFunc::~_3_InlineFunc()
{
}

inline void _3_InlineFunc::Test()
{
	//�����������Ὣ������Ĵ���ֱ���滻����������λ�ã������Ǹ��ݺ�����ַȥִ�У�����Ч�ʺܿ�
	//��һ���� ����̣��߼��̶��ĵط�ʹ������
	//�����麯���ڴ�������������
}

double _3_InlineFunc::Func(double d1, double d2)
{
	cout << d1 - d2 << endl;
	return d1 - d2;
}
