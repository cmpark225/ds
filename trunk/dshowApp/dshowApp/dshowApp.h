
// dshowApp.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CdshowAppApp:
// �� Ŭ������ ������ ���ؼ��� dshowApp.cpp�� �����Ͻʽÿ�.
//

class CdshowAppApp : public CWinApp
{
public:
	CdshowAppApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CdshowAppApp theApp;