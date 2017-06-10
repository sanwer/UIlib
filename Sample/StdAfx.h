#ifndef _STDAFX_H_
#define _STDAFX_H_
#pragma once

#define _CRT_SECURE_NO_DEPRECATE

#include "UIlib\\UIlib.h"

#include <olectl.h>

#define lengthof(x) (sizeof(x)/sizeof(*x))
#define MAX max
#define MIN min
#define CLAMP(x,a,b) (MIN(b,MAX(a,x)))

#endif
