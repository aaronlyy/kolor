#ifndef KOLOR_KOLOR_H
#define KOLOR_KOLOR_H

#include <string>

namespace kolor {

    // Constants with a trailing E are escaped

    // ANSI escape. Needs to be at the beginning of an ANSI sequence.
    const std::string ESCAPE = "\033[";

    // Needs to be at the end of every ANSI sequence.
    const std::string M = "m";

    // Reset everything back to normal
    const std::string RESET = "0";
    const std::string RESET_E = kolor::ESCAPE + kolor::RESET + kolor::M;

    const std::string FOREGROUND = "38;2;";
    const std::string BACKGROUND = "48;2;";

    const std::string BOLD = "1";
    const std::string BOLD_E = kolor::ESCAPE + kolor::BOLD + kolor::M;

    const std::string LIGHT = "2";
    const std::string LIGHT_E = kolor::ESCAPE + kolor::LIGHT + kolor::M;

    const std::string ITALIC = "3";
    const std::string ITALIC_E = kolor::ESCAPE + kolor::ITALIC + kolor::M;

    const std::string UNDERLINE = "4";
    const std::string UNDERLINE_E = kolor::ESCAPE + kolor::UNDERLINE + kolor::M;

    const std::string BLINK_SLOW = "5";
    const std::string BLINK_SLOW_E = kolor::ESCAPE + kolor::BLINK_SLOW + kolor::M;

    const std::string BLINK_RAPID = "6";
    const std::string BLINK_RAPID_E = kolor::ESCAPE + kolor::BLINK_RAPID + kolor::M;

    const std::string INVERT = "7";
    const std::string INVERT_E = kolor::ESCAPE + kolor::INVERT + kolor::M;

    const std::string HIDE = "8";
    const std::string HIDE_E = kolor::ESCAPE + kolor::HIDE + kolor::M;

    const std::string CROSSES = "9";
    const std::string CROSSES_E = kolor::ESCAPE + kolor::CROSSES + kolor::M;

    /**
     * Wraps given string between kolor::ESCAPE and kolor:M.
     * @param s
     * @return
     */
    std::string escape(const std::string &s);



    /**
     * Formats RGB values to an ANSI formatted string.
     * @param r
     * @param g
     * @param b
     * @return std::string
     */
    std::string format_rgb(unsigned short r, unsigned short g, unsigned short b);

    /**
     * Reset everything to normal.
     * @return
     */
    std::string set_reset();

    /**
     * Changes the foreground color for all following characters.
     * @param r
     * @param g
     * @param b
     * @return std::string
     */
    std::string set_fg_rgb(unsigned short r, unsigned short g, unsigned short b);

    /**
     * Changes the background color for all following characters.
     * @param r
     * @param g
     * @param b
     * @return std::string
     */
    std::string set_bg_rgb(unsigned short r, unsigned short g, unsigned short b);

    /**
     * Turns all following characters italic.
     * @return std::string
     */
    std::string set_italic();

    /**
     * Turns all following characters bold.
     * @return std::string
     */
    std::string set_bold();

    /**
     * Turns all following characters light.
     * @return std::string
     */
    std::string set_light();

    /**
     * Underlines all following characters.
     * @return std::string
     */
    std::string set_underline();

    // to be implemented...
    std::string set_blink_slow();
    std::string set_blink_rapid();
    std::string set_invert();
    std::string set_hide();
    std::string set_crosses();

    /**
     * Returns given string with ANSI escaped sequence to change the foreground color of all characters.
     * @param r
     * @param g
     * @param b
     * @return std::string
     */
    std::string fg_rgb(unsigned short r, unsigned short g, unsigned short b);

    /**
     * Returns given string with ANSI escaped sequence to change the background color of all characters.
     * @param r
     * @param g
     * @param b
     * @return
     */
    std::string bg_rgb(unsigned short r, unsigned short g, unsigned short b);

    /**
     * Returns given string with ANSI escaped sequence to change the foreground and background color of all characters.
     * @return
     */
    std::string fg_bg_rgb();

    /**
     * Returns given string with ANSI escaped sequence to turn characters italic.
     * @return
     */
    std::string italic();

    /**
     * Returns given string with ANSI escaped sequence to turn characters bold.
     * @return
     */
    std::string bold();

    /**
     * Returns given string with ANSI escaped sequence to turn characters light.
     * @return
     */
    std::string light();

    /**
     * Returns given string with ANSI escaped sequence to turn characters underlined.
     * @return
     */
    std::string underline();

    /**
     * Prints given string with given RGB values as foreground color.
     * @param s
     * @param r
     * @param g
     * @param b
     */
    void print_fg_rgb(const std::string &s, unsigned short r, unsigned short g, unsigned short b);

    /**
     * Prints given string with given RGB values as background color.
     * @param s
     * @param r
     * @param g
     * @param b
     */
    void print_bg_rgb(const std::string &s, unsigned short r, unsigned short g, unsigned short b);

    /**
     * Prints given string with given RGB values as foreground and background color.
     * @param s
     * @param rf
     * @param gf
     * @param bf
     * @param rb
     * @param gb
     * @param bb
     */
    void print_rgb(const std::string &s, unsigned short rf, unsigned short gf, unsigned short bf, unsigned short rb, unsigned gb, unsigned bb);

    /**
     * Prints given string italic.
     * @param s
     */
    void print_italic(const std::string &s);

    /**
     * Prints given string bold.
     * @param s
     */
    void print_bold(const std::string &s);

    /**
     * Prints given string light.
     * @param s
     */
    void print_light(const std::string &s);

    /**
     * Prints given string underlined.
     * @param s
     */
    void print_underline(const std::string &s);
}

#endif //KOLOR_KOLOR_H
