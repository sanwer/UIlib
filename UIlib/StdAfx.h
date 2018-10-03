#ifndef UILIB_STDAFX_H
#define UILIB_STDAFX_H
#pragma once

#define _CRT_SECURE_NO_DEPRECATE

#include "UIlib.h"

#include <olectl.h>

#define lengthof(x) (sizeof(x)/sizeof(*x))
#define MAX max
#define MIN min
#define CLAMP(x,a,b) (MIN(b,MAX(a,x)))

#include "Internal.h"

#endif
