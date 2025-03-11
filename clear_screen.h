#ifndef CLEAR_SCREEN_H
#define CLEAR_SCREEN_H

#include <stdio.h>

// clear_screen - Clears the terminal screen using ANSI escape codes.
// Note: This method works in terminals that support ANSI escape sequences.
// On some Windows systems, you may need to enable ANSI support or use system("cls").
static inline void clear_screen(void) {
    printf("\033[1;1H\033[2J");
}

#endif // CLEAR_SCREEN_H
