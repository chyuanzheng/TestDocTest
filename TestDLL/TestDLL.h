// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� TESTDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// TESTDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef TESTDLL_EXPORTS
#define TESTDLL_API __declspec(dllexport)
#else
#define TESTDLL_API __declspec(dllimport)
#endif

// �����Ǵ� TestDLL.dll ������
class TESTDLL_API CTestDLL {
public:
	CTestDLL(void);
	// TODO: �ڴ�������ķ�����
};

extern TESTDLL_API int nTestDLL;

TESTDLL_API int fnTestDLL(void);
TESTDLL_API void from_dll();   // to silence "-Wmissing-declarations" with GCC