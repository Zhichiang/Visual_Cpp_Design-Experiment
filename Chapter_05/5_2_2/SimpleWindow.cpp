#include <Windows.h>
#include <tchar.h>

//窗口函数的声明
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

//入口函数WinMain
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	//定义窗口类
	WNDCLASS wndclass;
	wndclass.lpfnWndProc = WindowProc;								//指定窗口函数
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpszClassName = _T("我的窗体");						//使用UNICODE字符集
	wndclass.hInstance = hInstance;
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);					//获取标准鼠标
	wndclass.hIcon = 0;
	wndclass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wndclass.lpszMenuName = 0;

	//注册窗口类
	if (RegisterClass(&wndclass) == 0) {
		MessageBox(0, _T("注册窗口类失败！"), _T("我的窗体"), MB_OK);
		return 0;
	}

	//创建窗口实例
	HWND hWnd = CreateWindow(_T("我的窗体"), _T("我的第一个窗体"),
		WS_OVERLAPPEDWINDOW, 100, 100, 500, 400, 0, 0, hInstance, 0);

	//显示和更新窗口
	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);

	//消息循环
	MSG msg;
	while (GetMessage(&msg, 0, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}

//窗口函数定义
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_CLOSE:													//接收到窗体关闭的消息
		PostQuitMessage(0);											//给消息队列发送WM_QUIT消息，以便消息循环结束退出程序
		break;
	//case WM_COMMAND;												//选择菜单项，控件向父窗体发送消息，快捷键按下
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}

	return 0;
}
