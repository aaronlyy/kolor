#include "kolors.h"

using namespace kolors;

int main() {
    system("");

    for (unsigned short r = 0; r <= 255; r = r + 50) {
        for (unsigned short g = 0; g <= 255; g = g + 50) {
            for (unsigned short b = 0; b <= 255; b = b + 50) {
                print_fg("This is a test\n", r, g , b);
            }
        }
    }

    system("pause");
    return 0;
}
