#ifndef UILIB_UICOMBO_H
#define UILIB_UICOMBO_H
#pragma once


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CSingleLinePickUI : public CControlUI
{
public:
	CSingleLinePickUI();

	void SetWidth(int cxWidth);

	LPCTSTR GetClass() const;
	UINT GetControlFlags() const;
	void Event(TEventUI& event);

	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);

protected:
	RECT m_rcButton;
	RECT m_rcLinks[8];
	int m_nLinks;
	int m_cxWidth;
	UINT m_uButtonState;
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CDropDownUI : public CContainerUI, public IListOwnerUI
{
public:
	CDropDownUI();

	LPCTSTR GetClass() const;
	LPVOID GetInterface(LPCTSTR pstrName);

	void Init();
	UINT GetControlFlags() const;

	CStdString GetText() const;

	SIZE GetDropDownSize() const;
	void SetDropDownSize(SIZE szDropBox);

	int GetCurSel() const;
	bool SelectItem(int iIndex);

	bool Add(CControlUI* pControl);
	bool Remove(CControlUI* pControl);
	void RemoveAll();

	bool Activate();

	void SetPos(RECT rc);
	void Event(TEventUI& event);
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);

protected:
	int m_iCurSel;
	int m_cxWidth;
	SIZE m_szDropBox;
	RECT m_rcButton;
	UINT m_uButtonState;
};

#endif
