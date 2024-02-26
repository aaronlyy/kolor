#ifndef KOLOR_KOLOR_H
#define KOLOR_KOLOR_H

#include <string>

namespace kolor {
    const std::string ESCAPE = "\033[";
    const std::string M = "m";

    const std::string RESET = ESCAPE + "0" + M;
    const std::string RESET_E = ESCAPE + "0" + M;

    const std::string FOREGROUND = "38;2;";
    const std::string BACKGROUND = "48;2;";

    const std::string ESCAPE_FOREGROUND = ESCAPE + FOREGROUND;
    const std::string ESCAPE_BACKGROUND = ESCAPE + BACKGROUND;

    const std::string BOLD = "1";
    const std::string BOLD_E = ESCAPE + BOLD + M;

    const std::string LIGHT = "2";
    const std::string LIGHT_E = ESCAPE + "2" + M;

    const std::string ITALIC = "3";
    const std::string ITALIC_E = ESCAPE + "3" + M;

    const std::string UNDERLINE = "4";
    const std::string UNDERLINE_E = ESCAPE + "4" + M;

    const std::string BLINK_SLOW = "5";
    const std::string BLINK_SLOW_E = ESCAPE + "5" + M;

    const std::string BLINK_RAPID = "6";
    const std::string BLINK_RAPID_E = ESCAPE + "6" + M;

    const std::string INVERT = "7";
    const std::string INVERT_E = ESCAPE + "7" + M;

    const std::string HIDE = "8";
    const std::string HIDE_E = ESCAPE + "8" + M;

    const std::string CROSSES = "9";
    const std::string CROSSES_E = ESCAPE + "9" + M;

    // functions to set escape sequences inline
    std::string format_rgb(unsigned short r, unsigned short g, unsigned short b);
    std::string set_fg(unsigned short r, unsigned short g, unsigned short b);
    std::string set_bg(unsigned short r, unsigned short g, unsigned short b);

    // to be implemented...
    std::string italic();
    std::string bold();
    std::string light();
    std::string underline();
    std::string blink_slow();
    std::string blink_rapid();
    std::string invert();
    std::string hide();
    std::string crosses();

    // higher level print functions
    void print_fg(const std::string &s, unsigned short r, unsigned short g, unsigned short b);
    void print_bg(const std::string &s, unsigned short r, unsigned short g, unsigned short b);
    void print(const std::string &s, unsigned short rf, unsigned short gf, unsigned short bf, unsigned short rb, unsigned gb, unsigned bb);
}

#endif //KOLOR_KOLOR_H
