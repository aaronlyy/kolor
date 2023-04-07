#include <iostream>
#include "kolor.h"

namespace kolor {

    // format RGB values to ANSI RGB string
    std::string format_rgb(unsigned short r, unsigned short g, unsigned short b) {
        return std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b);
    }

    // Concat ESCAPE + FOREGROUND + RGB + M
    std::string set_fg(unsigned short r, unsigned short g, unsigned short b){
        return ESCAPE_FOREGROUND + format_rgb(r, g, b) + M;
    }

    // Concat ESCAPE + BACKGROUND + RGB + M
    std::string set_bg(unsigned short r, unsigned short g, unsigned short b){
        return ESCAPE_BACKGROUND + format_rgb(r, g, b) + M;
    }

    // Print string with given rgb values as foreground
    void print_fg(const std::string  &s, unsigned short r, unsigned short g, unsigned short b) {
        std::cout << set_fg(r, g, b) << s << RESET;
    }

    // Print string with given rgb values as background
    void print_bg(const std::string &s, unsigned short r, unsigned short g, unsigned short b) {
        std::cout << set_bg(r, g, b) << s << RESET;
    }
}