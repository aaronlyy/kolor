#include "kolors.h"
#include "iostream"

namespace kolors {
    void print_italic(std::string s) {
        std::cout << K_ITALIC << s << K_M << K_RESET;
    }
}