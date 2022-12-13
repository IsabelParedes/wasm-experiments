#include <iostream>
#include <emscripten/emscripten.h>
#include <emscripten/val.h>

int main()
{
    std::cout << "In simple_fun.cpp\n";

    // Get js function
    auto js_fun = emscripten::val::module_property("simple_js_fun");

    // Call js function
    auto x = js_fun(2, 3).as<int>();
    // auto y = x.as<int>();

    std::cout << "JS fun returned: " << x << '\n';

    return 0;
}