#ifndef UILIB_UIDECORATION_H
#define UILIB_UIDECORATION_H
#pragma once



/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CTitleShadowUI : public CControlUI
{
public:
	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CListHeaderShadowUI : public CControlUI
{
public:
	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CSeparatorLineUI : public CControlUI
{
public:
	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};


/////////////////////////////////////////////////////////////////////////////////////
//

class UILIB_API CFadedLineUI : public CControlUI
{
public:
	LPCTSTR GetClass() const;
	SIZE EstimateSize(SIZE szAvailable);
	void DoPaint(HDC hDC, const RECT& rcPaint);
};

#endif
