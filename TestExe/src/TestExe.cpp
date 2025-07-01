// TestExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "../../TestLib/src/framework.h"
#include "testlib.h"
#include "testdll.h"

int main()
{
	testlib::print("Test .lib");
	print("Test .dll");
}

// TODO vcpkg, tests