#include <Windows.h>
#include <tchar.h>

//���ں���������
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

//��ں���WinMain
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	//���崰����
	WNDCLASS wndclass;
	wndclass.lpfnWndProc = WindowProc;								//ָ�����ں���
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpszClassName = _T("�ҵĴ���");						//ʹ��UNICODE�ַ���
	wndclass.hInstance = hInstance;
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);					//��ȡ��׼���
	wndclass.hIcon = 0;
	wndclass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wndclass.lpszMenuName = 0;

	//ע�ᴰ����
	if (RegisterClass(&wndclass) == 0) {
		MessageBox(0, _T("ע�ᴰ����ʧ�ܣ�"), _T("�ҵĴ���"), MB_OK);
		return 0;
	}

	//��������ʵ��
	HWND hWnd = CreateWindow(_T("�ҵĴ���"), _T("�ҵĵ�һ������"),
		WS_OVERLAPPEDWINDOW, 100, 100, 500, 400, 0, 0, hInstance, 0);

	//��ʾ�͸��´���
	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);

	//��Ϣѭ��
	MSG msg;
	while (GetMessage(&msg, 0, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}

//���ں�������
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_CLOSE:													//���յ�����رյ���Ϣ
		PostQuitMessage(0);											//����Ϣ���з���WM_QUIT��Ϣ���Ա���Ϣѭ�������˳�����
		break;
	//case WM_COMMAND;												//ѡ��˵���ؼ��򸸴��巢����Ϣ����ݼ�����
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}

	return 0;
}
