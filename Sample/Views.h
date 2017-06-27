#ifndef _VIEWS_H_
#define _VIEWS_H_
#pragma once

class CStandardPageWnd : public CWindowWnd, public INotifyUI
{
public:
	UINT GetClassStyle() const;
	void OnFinalMessage(HWND hWnd);
	LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);

	virtual void Init();
	virtual void OnPrepareAnimation();
	virtual void Notify(TNotifyUI& msg);
	virtual LPCTSTR GetDialogResource() const = 0;

public:
	CPaintManagerUI m_pm;
};

class CStartPageWnd : public CStandardPageWnd
{
public:
	LPCTSTR GetWindowClassName() const;
	LPCTSTR GetDialogResource() const;
	void OnPrepareAnimation();
	void Init();
};

class CConfigurePageWnd : public CStandardPageWnd
{
public:
	LPCTSTR GetWindowClassName() const;
	LPCTSTR GetDialogResource() const;
	void OnPrepareAnimation();
};

class CRegistersPageWnd : public CStandardPageWnd, public IListCallbackUI
{
public:
	LPCTSTR GetWindowClassName() const;
	LPCTSTR GetDialogResource() const;
	void OnPrepareAnimation();
	// IListCallbackUI
	LPCTSTR GetItemText(CControlUI* pControl, int iIndex, int iSubItem);
	int CompareItem(CControlUI* pList, CControlUI* pItem1, CControlUI* pItem2);
};

class CReportsPageWnd : public CStandardPageWnd
{
public:
	LPCTSTR GetWindowClassName() const;
	LPCTSTR GetDialogResource() const;
	void OnPrepareAnimation();
};

class CSystemsPageWnd : public CStandardPageWnd, public IListCallbackUI
{
public:
	LPCTSTR GetWindowClassName() const;
	LPCTSTR GetDialogResource() const;
	void Notify(TNotifyUI& msg);
	void OnPrepareAnimation();
	void OnExpandItem(CControlUI* pControl);
	// IListCallbackUI
	LPCTSTR GetItemText(CControlUI* pControl, int iIndex, int iSubItem);
	int CompareItem(CControlUI* pList, CControlUI* pItem1, CControlUI* pItem2);
};

class CSearchPageWnd : public CStandardPageWnd
{
public:
	LPCTSTR GetWindowClassName() const;
	LPCTSTR GetDialogResource() const;
	void Notify(TNotifyUI& msg);
	void Init();
};

class CEditPageWnd : public CStandardPageWnd
{
public:
	LPCTSTR GetWindowClassName() const;
	LPCTSTR GetDialogResource() const;
	void Notify(TNotifyUI& msg);
	void OnPrepareAnimation();
	void Init();
};

class CPopupWnd : public CStandardPageWnd
{
public:
	UINT GetClassStyle() const;
	LPCTSTR GetWindowClassName() const;
	LPCTSTR GetDialogResource() const;
	void Notify(TNotifyUI& msg);
	void Init();
};

#endif // _VIEWS_H_
