// TestDLL.cpp : ���� DLL Ӧ�ó������ڵ㡣
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


// ���ǵ���������һ��ʾ��
TESTDLL_API int nTestDLL=0;

// ���ǵ���������һ��ʾ����
TESTDLL_API int fnTestDLL(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� TestDLL.h
CTestDLL::CTestDLL()
{
	return;
}
