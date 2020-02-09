// TestDLL.cpp : 定义 DLL 应用程序的入口点。
//

#include "stdafx.h"
#include "TestDLL.h"




#define DOCTEST_CONFIG_IMPLEMENTATION_IN_DLL
#include "../doctest.h"

#include <cstdio>


TEST_CASE("dll") {
    printf("I am a test from the dll!\n");
}


TESTDLL_API void from_dll() {} // force the creation of a .lib file with MSVC


// 这是导出变量的一个示例
TESTDLL_API int nTestDLL=0;

// 这是导出函数的一个示例。
TESTDLL_API int fnTestDLL(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 TestDLL.h
CTestDLL::CTestDLL()
{
	return;
}
