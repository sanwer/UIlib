#ifndef UILIB_UITOOL_H
#define UILIB_UITOOL_H
#pragma once
#include "UIButton.h"


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CToolbarUI : public CHorizontalLayoutUI
{
public:
	CToolbarUI();

	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CToolbarTitlePanelUI : public CControlUI
{
public:
	CToolbarTitlePanelUI();

	void SetPadding(int iPadding);

	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);

protected:
	int m_iPadding;
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CToolSeparatorUI : public CControlUI
{
public:
	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CToolGripperUI : public CControlUI
{
public:
	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CToolButtonUI : public CButtonUI
{
public:
	CToolButtonUI();

	LPCTSTR GetClass() const;

	void DoPaint(HDC hDC, const RECT& rcPaint);
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CStatusbarUI : public CContainerUI
{
public:
	LPCTSTR GetClass() const;

	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};

#endif
