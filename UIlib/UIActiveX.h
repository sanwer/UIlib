#ifndef UILIB_UIACTIVEX_H
#define UILIB_UIACTIVEX_H
#pragma once


/////////////////////////////////////////////////////////////////////////////////////
//

class CActiveXCtrl;
struct IOleObject;


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CActiveXUI : public CControlUI, public IMessageFilterUI
{
	friend CActiveXCtrl;
public:
	CActiveXUI();
	virtual ~CActiveXUI();

	LPCTSTR GetClass() const;

	bool CreateControl(const CLSID clsid);
	bool CreateControl(LPCTSTR pstrCLSID);
	HRESULT GetControl(const IID iid, LPVOID* ppRet);

	void SetWidth(int cx);
	void SetHeight(int cy);

	void SetPos(RECT rc);
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);

	void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);

	LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, bool& bHandled);

protected:
	void ReleaseControl();
	bool DelayedControlCreation();

protected:
	CLSID m_clsid;
	bool m_bCreated;
	IOleObject* m_pUnk;
	CActiveXCtrl* m_pControl;
	HWND m_hwndHost;
	SIZE m_szFixed;
};

#endif
