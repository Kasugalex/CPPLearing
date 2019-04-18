#include "InlineFunc.h"



InlineFunc::InlineFunc()
{
}


InlineFunc::~InlineFunc()
{
}

inline void InlineFunc::Test()
{
	//内联函数，会将函数里的代码直接替换到函数所在位置，而不是根据函数地址去执行，所以效率很快
	//但一般在 代码短，逻辑固定的地方使用内联
	//不建议函数内大量代码用内联
}
