#include <Windows.h>
#include <tchar.h>

//���ں���������
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

//��ں���WinMain
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	//���崰����
	WNDCLASS wndclass;

	wndclass.lpfnWndProc = WindowProc;						//ָ�����ں���
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpszClassName = _T("�ҵĴ���");				//ʹ��UNICODE�ַ���
	wndclass.hInstance = hInstance;
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);			//��ȡ��׼���
	wndclass.hIcon = 0;
	wndclass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wndclass.lpszMenuName = 0;

	//ע�ᴰ����
	if (RegisterClass(&wndclass) == 0) {
		MessageBox(0, _T("ע�ᴰ����ʧ��"), _T("�ҵĴ���"), MB_OK);
		return 0;
	}

	//��������ʵ��
	HWND hWnd = CreateWindow(_T("�ҵĴ���"), _T("�����ͼ"), WS_OVERLAPPEDWINDOW, 100, 100, 500, 400, 0, 0, hInstance, 0);

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

//���ں����Ķ���
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_PAINT:												//��Ӧ��ͼ��Ϣ
	{
		PAINTSTRUCT ps;

		//���DC
		HDC hDC = BeginPaint(hwnd, &ps);
		//����ʵ�ߡ����1����ɫ�ı�
		HPEN hPen = CreatePen(PS_SOLID, 1, RGB(255, 0, 0));
		//����ѡ��DC
		HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);

		//���ƺ�ɫ��ֱ��
		MoveToEx(hDC, 10, 10, NULL);
		LineTo(hDC, 90, 50);

		//����һ����ɫ��ˢ��
		HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 255));
		HBRUSH hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

		//���ƾ��Σ���Ϊ��û�л������Ի��Ƶ��Ǻ�ɫ�߿���ɫ����ľ���
		Rectangle(hDC, 100, 100, 200, 170);
		//������Բ����Ϊ�ʺ�ˢ�Ӷ�û�л������Ի��Ƶ��Ǻ�ɫ�߿���ɫ����ľ���
		Ellipse(hDC, 200, 230, 260, 300);

		//�������
		TextOut(hDC, 200, 30, _T("��ͼ����"), 4);

		//�ָ���ͼ����
		SelectObject(hDC, hOldPen);
		SelectObject(hDC, hOldBrush);

		//ɾ����ͼ����
		DeleteObject(hPen);
		DeleteObject(hBrush);

		//�ͷ�DC
		EndPaint(hwnd, &ps);
	}
		break;
	case WM_CLOSE:												//�ӵ�����رյ���Ϣ
		//����Ϣ���з���WM_QUIT��Ϣ���Ա���Ϣѭ�������˳�����
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
	return 0;
}