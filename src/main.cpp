#include "version.hpp"

#include <iostream>

int main()
{
    std::cout << "Hello, world.\nversion: " << example::get_version() << '\n';
    return 0;
}
