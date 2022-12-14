#include <iostream>
#include <emscripten/bind.h>

void subscriber(std::string msg)
{
    std::cout << "[SUB]: " << msg << '\n';
}

EMSCRIPTEN_BINDINGS(my_module)
{
    emscripten::function("subscriber", &subscriber);
}