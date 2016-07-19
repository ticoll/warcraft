#pragma once

#include "resource.h"
#include <iostream>

#define MAX_LOADSTRING 100
#define MY_BUTTON 101
#define MY_STRING 102

// Global Variables:
HINSTANCE hInst;                                // current instance
WCHAR szTitle[MAX_LOADSTRING] = L"WarCraft";                  // The title bar text
WCHAR szWindowClass[MAX_LOADSTRING] = L"WarCraft";            // the main window class name

int APIENTRY wWinMain(_In_     HINSTANCE hInstance,     //argv[0]
	_In_opt_ HINSTANCE hPrevInstance,
	_In_	   LPWSTR    lpCmdLine,     //argv[:] all args
	_In_	   int       nCmdShow);

ATOM MyRegisterClass(HINSTANCE hInstance);

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow);

LRESULT CALLBACK WindowEventHandler(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

INT_PTR CALLBACK About	(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);

LRESULT CALLBACK ButtonPress(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);