#ifndef HELPER_H
#define HELPER_H
#include "./add_new_tab.c"
#include "./add_new_line.c"
#include "./clear_terminal.c"

// * Custom functions.
extern void add_new_tab(void);
extern void add_new_line(void);
extern void clear_terminal(void);

// * Color codes.
#define BLUE "\e[0;34m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define RED "\e[0;31m"
#define RESET "\e[0m"

#endif
