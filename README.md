<p align="center">
  <img src=".\media\kolor_3.png" alt="banner">
</p>

<h3 align="center">Pretty terminal output using ANSI escape codes</h3>

[How it works](https://en.wikipedia.org/wiki/ANSI_escape_code)

## Example

```c++
#include <iostream>
#include "kolor.h"

int main() {

    // set colors using constants
    std::cout << kolor::ESCAPE << kolor::FOREGROUND << kolor::format_rgb(200, 20, 50) << kolor::M << "Change colors using constants\n" << kolor::RESET;

    // set colors using inline set functions
    std::cout << kolor::set_fg(100, 23, 66) << "Change color using inline set functions\n" << kolor::RESET;

    // use print_bg function to change the background
    kolor::print_bg("Change background using print_bg\n", 23, 123, 90);

    // use print_fg function to change the foreground
    kolor::print_fg("Change background using print_fg\n", 23, 123, 90);

    // use print function to change background and foreground of an output
    kolor::print("use print function to change background and foreground", 144, 252, 3, 3, 140, 252);

    // reset everything
    std::cout << kolor::RESET;

    return 0;
}
```

## About

Made with ♥ by [aaronlyy](https://github.com/aaronlyy)
