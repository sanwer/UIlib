#ifndef UILIB_UILABEL_H
#define UILIB_UILABEL_H
#pragma once


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CLabelPanelUI : public CControlUI
{
public:
	CLabelPanelUI();

	LPCTSTR GetClass() const;

	void SetText(LPCTSTR pstrText);

	void SetWidth(int cxWidth);
	void SetTextStyle(UINT uStyle);

	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
	void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);

protected:
	int m_cxWidth;
	UINT m_uTextStyle;
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CGreyTextHeaderUI : public CControlUI
{
public:
	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};

#endif
