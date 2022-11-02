#include <iostream>
#include "kolors.h"

int main() {
    system("");

    // Setting colors manually
    std::cout << kolors::ESCAPE << kolors::FOREGROUND << kolors::format_rgb(200, 20, 50) << kolors::M << "Test string\n" << kolors::RESET;

    // Set color semi-manually
    std::cout << kolors::set_fg(100,23,66) << "Yet another test string\n" << kolors::RESET;

    // Using builtin print function
    kolors::print_bg("Another test string\n", 23, 123, 90);

    return 0;
}
