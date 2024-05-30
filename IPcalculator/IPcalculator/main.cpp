#include<Windows.h>		//<file> - компилятор будет искать file в системных каталогах Visual Studio
#include<CommCtrl.h>
#include"resource.h"	//"file" - компилятор будет искать file сначала в каталоге с проектом, а потом в системных каталогах Visual Studio

BOOL CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpCmdLine, INT nCmdShow)
{
	DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc, 0);
	return 0;
}

BOOL CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	int a = 2;
	{
		int a = 2;
	}
	switch (uMsg)
	{
	case WM_INITDIALOG:
	{
		HWND hUpDown = GetDlgItem(hwnd, IDC_SPIN_PREFIX);
		SendMessage(hUpDown, UDM_SETRANGE32, 0, 32);
	}
	break;
	case WM_COMMAND:
		break;
	case WM_CLOSE:
		EndDialog(hwnd, 0);
	}
	return FALSE;
}