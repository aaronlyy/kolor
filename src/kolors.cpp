#include <iostream>
#include "kolors.h"

namespace kolors {

    std::string format_rgb(unsigned short &r, unsigned short &g, unsigned short &b) {
        return std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b);
    }

    std::string rgb_fg(unsigned short &r, unsigned short &g, unsigned short &b){
        return ESCAPE_FOREGROUND + format_rgb(r, g, b) + M;
    }

    std::string rgb_bg(unsigned short &r, unsigned short &g, unsigned short &b){
        return ESCAPE_BACKGROUND+ format_rgb(r, g, b) + M;
    }

    void print_fg(const std::string  &s, unsigned short &r, unsigned short &g, unsigned short &b) {
        std::cout << rgb_fg(r, g, b) << s << RESET;
    }

    void print_bg(const std::string &s, unsigned short &r, unsigned short &g, unsigned short &b) {
        std::cout << rgb_bg(r, g, b) << s << RESET;
    }
}