#include <iostream>
#include <ctime>
#include <thread>

int main()
{
    std::time_t time_ms { std::time(nullptr) };
    std::cout << "TIME: " << time_ms << '\n';

    std::this_thread::sleep_for(std::chrono::milliseconds(2000));

    time_ms = std::time(nullptr);
    std::cout << "TIME: " << time_ms << '\n';

    return 0; 
}