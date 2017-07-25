#include <Windows.h>
#include <tchar.h>

//窗口函数的声明
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

//入口函数WinMain
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	//定义窗口类
	WNDCLASS wndclass;

	wndclass.lpfnWndProc = WindowProc;						//指定窗口函数
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpszClassName = _T("我的窗体");				//使用UNICODE字符集
	wndclass.hInstance = hInstance;
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);			//获取标准鼠标
	wndclass.hIcon = 0;
	wndclass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wndclass.lpszMenuName = 0;

	//注册窗口类
	if (RegisterClass(&wndclass) == 0) {
		MessageBox(0, _T("注册窗口类失败"), _T("我的窗体"), MB_OK);
		return 0;
	}

	//创建窗口实例
	HWND hWnd = CreateWindow(_T("我的窗体"), _T("窗体绘图"), WS_OVERLAPPEDWINDOW, 100, 100, 500, 400, 0, 0, hInstance, 0);

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

//窗口函数的定义
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_PAINT:												//响应绘图消息
	{
		PAINTSTRUCT ps;

		//获得DC
		HDC hDC = BeginPaint(hwnd, &ps);
		//创建实线、宽度1、红色的笔
		HPEN hPen = CreatePen(PS_SOLID, 1, RGB(255, 0, 0));
		//将笔选入DC
		HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);

		//绘制红色的直线
		MoveToEx(hDC, 10, 10, NULL);
		LineTo(hDC, 90, 50);

		//创建一个蓝色的刷子
		HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 255));
		HBRUSH hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

		//绘制矩形，因为笔没有换，所以绘制的是红色边框，蓝色区域的矩形
		Rectangle(hDC, 100, 100, 200, 170);
		//绘制椭圆，因为笔和刷子都没有换，所以绘制的是红色边框，蓝色区域的矩形
		Ellipse(hDC, 200, 230, 260, 300);

		//输出文字
		TextOut(hDC, 200, 30, _T("绘图测试"), 4);

		//恢复绘图对象
		SelectObject(hDC, hOldPen);
		SelectObject(hDC, hOldBrush);

		//删除绘图对象
		DeleteObject(hPen);
		DeleteObject(hBrush);

		//释放DC
		EndPaint(hwnd, &ps);
	}
		break;
	case WM_CLOSE:												//接到窗体关闭的消息
		//给消息队列发送WM_QUIT消息，以便消息循环结束退出程序
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
	return 0;
}