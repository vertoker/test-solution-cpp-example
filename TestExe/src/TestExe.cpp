// TestExe.cpp : This file contains the 'main' function. Program execution begins and ends there

#include "testlib.h" // test static library linkage
#include "testdll.h" // test dynamic library linkage

#include <fmt/base.h> // test external packages (vcpkg integrate install)

#include "GLFW/glfw3.h" // test static/dynamic thirdparty library linkage

int main()
{
	testlib::print("Test .lib");
	print("Test .dll");
	fmt::print("Test vcpkg\n");

	int result = glfwInit();
	if (!result)
	{
		fmt::print("Failed to initialize GLFW\n");
		return -1;
	}

	fmt::print("GLFW initialized successfully\n");

	glfwTerminate();

	return 0;
}

// TODO vcpkg, tests, res, lib, dll