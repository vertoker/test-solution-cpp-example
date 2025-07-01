# TestSolution

Simple study project with core features of MSBuild

1. `TestLib` - Source Static Lib, generates `.lib`, include `src/`
2. `TestDll` - Source Dynamic Lib, generates `.dll` and `dll.lib` (for usage), include `src/`
    - functions uses `extern "C" void ...` for creation `dll.lib`
3. `TestTests` - Executable for Tests (generated through VS template), include `src/`, reference/include `TestLib` and `TestDll`
4. `thirdparty` - external dependencies in form of prepared `.lib` and `.dll/dll.lib` files (`glfw3` as example)
5. `TestExe` - Executable, include `src/`, reference/include `TestLib` and `TestDll`
    - include `glfw3/include` additional dependencies `glfw3dll.lib` and copy to out dir `glfw3.dll`

With copy `Resources/` idk how to do it without `xcopy` command

That's all that I need to setup my future MSBuild projects
