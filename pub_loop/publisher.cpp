#include <iostream>
#include <chrono>
#include <thread>
#include <emscripten/emscripten.h>
#include <emscripten/val.h>

int main()
{
    std::cout << "Initializing publisher.\n";

    // Timer
    auto start_t { std::chrono::system_clock::now() };
    auto end_t { start_t };
    std::chrono::duration<double> elapsed_seconds = end_t - start_t;

    std::string msg { };
    auto js_pub = emscripten::val::module_property("js_pub");

    for (int i=0; i<15; i++)
    {
        msg = "Hi there " + std::to_string(i);

        // Update timer
        end_t = std::chrono::system_clock::now();
        elapsed_seconds = end_t - start_t;

        std::string msg_sent = js_pub(msg, elapsed_seconds.count()).as<std::string>();
        // std::cout << "Message published: " << msg << '\n';

        std::this_thread::sleep_for(std::chrono::milliseconds(1029));
    }

    return 0;
}

