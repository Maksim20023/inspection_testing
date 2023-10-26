#include <iostream>
#include <string>

#ifdef _WIN32
const std::string OS = "Windows";
#elif _APPLE_
const std::string OS = "macOS";
#elif _linux
const std::string OS = "Linux";
#else
const std::string OS = "unknown";
#endif

int main() {
    std::cout << "Hello world, I'm running on " << OS << std::endl;
    for (int i = 2; i <= 22; i++) {
        std::cout << i << " ";
    }
    return 0;

}
