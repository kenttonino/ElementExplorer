#ifndef HELPER_H
#define HELPER_H
#include "./add_new_tab.c"
#include "./add_new_line.c"
#include "./clear_terminal.c"

// * Custom functions.
extern void add_new_tab(int num_lines);
extern void add_new_line(int num_lines);
extern void clear_terminal(void);

// * Color codes.
#define BLUE "\x1B[0;34m"
#define GREEN "\x1B[0;32m"
#define YELLOW "\x1B[0;33m"
#define RED "\x1B[0;31m"
#define RESET "\x1B[0m"

#endif
