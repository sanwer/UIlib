#ifndef UILIB_UITAB_H
#define UILIB_UITAB_H
#pragma once
#include "UIlist.h"


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CTabFolderUI : public CContainerUI, public IListOwnerUI
{
public:
	CTabFolderUI();

	LPCTSTR GetClass() const;

	void Init();

	bool Add(CControlUI* pControl);

	int GetCurSel() const;
	bool SelectItem(int iIndex);

	void Event(TEventUI& Event);

	void SetPos(RECT rc);
	void DoPaint(HDC hDC, const RECT& rcPaint);

	void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);

protected:
	int m_iCurSel;
	RECT m_rcPage;
	RECT m_rcClient;
	CControlUI* m_pCurPage;
	CStdValArray m_aTabAreas;
};


class UILIB_API CTabPageUI : public CContainerUI
{
public:
	CTabPageUI();
	LPCTSTR GetClass() const;

	bool Activate();
};

#endif
