#pragma once

#ifdef TESTDLL_EXPORT
#define TESTDLL_API __declspec(dllexport);
#else
#define TESTDLL_API __declspec(dllimport)
#endif // TESTDLL_EXPORT

#include <iostream>

extern "C" TESTDLL_API void print(const char* str);
