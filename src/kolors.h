#ifndef KOLORS_KOLORS_H
#define KOLORS_KOLORS_H

#include <string>

namespace kolors {
    const std::string ESCAPE = "\033[";
    const std::string M = "m";
    const std::string RESET = ESCAPE + "0" + M;

    const std::string FOREGROUND = "38;2;";
    const std::string BACKGROUND = "48;2;";

    const std::string ESCAPE_FOREGROUND = ESCAPE + FOREGROUND;
    const std::string ESCAPE_BACKGROUND = ESCAPE + BACKGROUND;

    const std::string BOLD = ESCAPE + "1" + M;
    const std::string LIGHT = ESCAPE + "2" + M;
    const std::string ITALIC = ESCAPE + "3" + M;
    const std::string UNDERLINE = ESCAPE + "4" + M;
    const std::string BLINK_SLOW = ESCAPE + "5" + M;
    const std::string BLINK_RAPID = ESCAPE + "6" + M;
    const std::string INVERT = ESCAPE + "7" + M;
    const std::string HIDE = ESCAPE + "8" + M;
    const std::string CROSSES = ESCAPE + "9" + M;

    std::string format_rgb(unsigned short r, unsigned short g, unsigned short b);
    std::string set_fg(unsigned short r, unsigned short g, unsigned short b);
    std::string set_bg(unsigned short r, unsigned short g, unsigned short b);

    void print_fg(const std::string &s, unsigned short r, unsigned short g, unsigned short b);
    void print_bg(const std::string &s, unsigned short r, unsigned short g, unsigned short b);
}

#endif //KOLORS_KOLORS_H
