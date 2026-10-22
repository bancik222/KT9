#include <iostream>

int main() {
    std::cout << "KT9: Jenkins parameterized build" << std::endl;

#ifdef DEBUG
    std::cout << "Build mode: DEBUG" << std::endl;
#else
    std::cout << "Build mode: RELEASE" << std::endl;
#endif

    return 0;
}
