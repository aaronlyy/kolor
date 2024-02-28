#include <iostream>
#include "kolor.h"

namespace kolor {

    std::string escape(const std::string &s) {
        return kolor::ESCAPE + s + kolor::M;
    }

    std::string format_rgb(unsigned short r, unsigned short g, unsigned short b) {
        return std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b);
    }

    std::string set_reset() {
        return kolor::RESET_E;
    }

    std::string set_fg_rgb(unsigned short r, unsigned short g, unsigned short b){
        return kolor::ESCAPE + kolor::FOREGROUND + format_rgb(r, g, b) + kolor::M;
    }

    std::string set_bg_rgb(unsigned short r, unsigned short g, unsigned short b){
        return kolor::ESCAPE + kolor::BACKGROUND + format_rgb(r, g, b) + kolor::M;
    }

    std::string set_bold() {
        return kolor::escape(kolor::BOLD);
    }

    std::string set_italic() {
        return kolor::escape(kolor::ITALIC);
    }

    std::string set_light() {
        return kolor::escape(kolor::LIGHT);
    }

    std::string set_underline() {
        return kolor::escape(kolor::UNDERLINE);
    }

    // print string with given rgb values as foreground
    void print_fg_rgb(const std::string &s, unsigned short r, unsigned short g, unsigned short b) {
        std::cout << set_fg_rgb(r, g, b) << s << kolor::RESET_E;
    }

    // print string with given rgb values as background
    void print_bg_rgb(const std::string &s, unsigned short r, unsigned short g, unsigned short b) {
        std::cout << set_bg_rgb(r, g, b) << s << kolor::RESET_E;
    }

    // print text with given foreground and background rgb values
    void print_rgb(const std::string &s, unsigned short fr, unsigned short fg, unsigned short fb, unsigned short br, unsigned bg, unsigned bb) {
        std::cout << set_bg_rgb(fr, fg, fb) << set_fg_rgb(br, bg, bb) << s << kolor::RESET_E;
    }

    void print_bold(const std::string &s) {
        std::cout << set_bold() << s << kolor::RESET_E;
    }

    void print_italic(const std::string &s) {
        std::cout << kolor::set_italic() << s << kolor::RESET_E;
    }

    void print_light(const std::string &s) {
        std::cout << kolor::set_light() << s << kolor::RESET_E;
    }

    void print_underline(const std::string &s) {
        std::cout << kolor::set_underline() << s << kolor::RESET_E;
    }
}