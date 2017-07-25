#include <tchar.h>
#include <Windows.h>

int main() {
	TCHAR sCity[] = _T("Hello.");
	//调用API函数显示字符串
	MessageBox(0, sCity, _T("测试"), MB_OK);
}