# kolor: Colorful terminal output 👾

Kolor adds colored text to your terminal output.

## Example

```c++
#include <iostream>
#include "kolor.h"

int main() {

    // Setting colors manually
    std::cout << kolor::ESCAPE << kolor::FOREGROUND << kolor::format_rgb(200, 20, 50) << kolor::M << "Test string\n" << kolor::RESET;

    // Set color semi-manually
    std::cout << kolor::set_fg(100,23,66) << "Yet another test string\n" << kolor::RESET;

    // Using builtin print function
    kolor::print_bg("Another test string\n", 23, 123, 90);

    // reset everything
    std::cout << kolor::RESET;

    return 0;
}
```

## About

Made with ♥ by [aaronlyy](https://github.com/aaronlyy)
