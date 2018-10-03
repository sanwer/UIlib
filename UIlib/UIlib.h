#ifndef _UILIB_H_
#define _UILIB_H_
#pragma once

#ifdef UILIB_STATIC
#	define UILIB_API
#else
#	if defined(UILIB_EXPORTS)
#		if defined(_MSC_VER)
#			define UILIB_API __declspec(dllexport)
#		else
#			define UILIB_API
#		endif
#	else
#		if defined(_MSC_VER)
#			define UILIB_API __declspec(dllimport)
#		else
#			define UILIB_API
#		endif
#	endif
#endif
#define UILIB_COMDAT __declspec(selectany)

#pragma warning(disable:4251)

#if defined _M_IX86
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif

#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include <assert.h>
#include <crtdbg.h>
#include <malloc.h>

#include "UIBase.h"
#include "UIAnim.h"
#include "UIManager.h"
#include "UIBlue.h"
#include "UIContainer.h"
#include "UIList.h"
#include "UIEdit.h"
#include "UILabel.h"
#include "UITab.h"
#include "UICombo.h"
#include "UITool.h"
#include "UIButton.h"
#include "UIPanel.h"
#include "UIActiveX.h"
#include "UIDecoration.h"

#include "UIMarkup.h"
#include "UIDlgBuilder.h"

#pragma comment( lib, "winmm.lib" )
#pragma comment( lib, "comctl32.lib" )

#endif
