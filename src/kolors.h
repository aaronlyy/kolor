#ifndef KOLORS_KOLORS_H
#define KOLORS_KOLORS_H

#include <string>

#define K_ESCAPE "\033["
#define K_M "m"
#define K_RESET K_ESCAPE "0" K_M

#define K_BOLD K_ESCAPE "1" K_M
#define K_LIGHT K_ESCAPE "2" K_M
#define K_ITALIC K_ESCAPE "3" K_M
#define K_UNDERLINE K_ESCAPE "4" K_M
#define K_BLINK_SLOW K_ESCAPE "5" K_M
#define K_BLINK_RAPID K_ESCAPE "6" K_M
#define K_INVERT K_ESCAPE "7" K_M
#define K_HIDE K_ESCAPE "8" K_M
#define K_CROSSED K_ESCAPE "9" K_M

#define K_FG "38;2;"
#define K_BG  "48;2;"
#define K_E_FG K_ESCAPE K_FG
#define K_E_BG K_ESCAPE K_BG

#define K_RGB(R, G, B) #R ";" #G ";" #B

#define K_RGB_FG(R, G, B) K_E_FG K_RGB(R, G, B) K_M
#define K_RGB_BG(R, G, B) K_E_BG K_RGB(R, G, B) K_M

namespace kolors {
    void print_fg(std::string s, unsigned char r, unsigned char g, unsigned char b);
    void print_bg(std::string s, unsigned char r, unsigned char g, unsigned char b);
    void print_italic(std::string s);
}

#endif //KOLORS_KOLORS_H
