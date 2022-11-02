#include <iostream>
#include "kolors.h"

int main() {
    system("");

    std::cout <<  K_RGB_FG(0,255,0) << K_RGB_BG(255,0,0) << K_ITALIC;
    std::cout << "colors and effects are set" << "\n";
    std::cout << "still set";
    std::cout << K_RESET;

    system("pause");

    kolors::print_italic("Teststring\n");

    system("pause");
    return 0;
}
