#include <iostream>
#include "kolor.h"

int main() {

    /**
     * This is an example on how to use kolor.
     * There are four different methods of changing the appearance of terminal output.
     * 1. Inline constants
     * 2. Inline set functions
     * 3. Wrapper functions
     * 4. Direct print functions
     */

    // Option 1: Change appearance using inline constants
    // 1.1 Turn text bold using the most verbose constants
    std::cout << kolor::ESCAPE << kolor::BOLD << kolor::M << "This text was made bold using inline constants.\n" << kolor::ESCAPE << kolor::RESET << kolor::M;

    // 1.2 Turn text bold using already escaped constants
    std::cout << kolor::BOLD_E << "This text was also made bold but with less code.\n" << kolor::RESET_E;

    // Options 2: Change appearance using set functions
    // 2.1 Turn text italic using the set_italic and set_reset
    std::cout << kolor::set_italic() << "This text is italic.\n" << kolor::set_reset();

    // 2.2 Turn text green using set_fg_rgb and set_reset
    std::cout << kolor::set_fg_rgb(0,255,0) << "This text was made green using rgb values.\n" << kolor::set_reset();

    // Option 3: Change appearance using wrapper functions
    // wip

    // Option 4: Directly print text using print functions
    // 4.1 Print underlined text using print_underline
    kolor::print_underline("This text is underlined.\n");

    // 4.2 Print red text using print_fg_rgb
    kolor::print_fg_rgb("This text is red.\n", 255, 0, 0);

    // 4.3 Print text with blue background using print_bg_rgb
    kolor::print_bg_rgb("This text has a blue background.\n", 0, 0, 255);
    return 0;
}
