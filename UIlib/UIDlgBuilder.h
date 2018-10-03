#ifndef UILIB_BLUEBUILDER_H
#define UILIB_BLUEBUILDER_H
#pragma once


class IDialogBuilderCallback
{
public:
	virtual CControlUI* CreateControl(LPCTSTR pstrClass) = 0;
};


class UILIB_API CDialogBuilder
{
public:
	CControlUI* Create(LPCTSTR pstrXML, IDialogBuilderCallback* pCallback = NULL);
	CControlUI* CreateFromResource(UINT nRes, IDialogBuilderCallback* pCallback = NULL);

private:
	CControlUI* _Parse(CMarkupNode* parent, CControlUI* pParent = NULL);

	CMarkup m_xml;
	IDialogBuilderCallback* m_pCallback;
};

#endif
