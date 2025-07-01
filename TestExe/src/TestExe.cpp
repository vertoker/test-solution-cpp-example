// TestExe.cpp : This file contains the 'main' function. Program execution begins and ends there

#include "testlib.h"
#include "testdll.h"
#include <fmt/base.h> // vcpkg integrate install

int main()
{
	testlib::print("Test .lib");
	print("Test .dll");
	fmt::print("Test vcpkg\n");
}

// TODO vcpkg, tests, res, lib, dll