#ifndef INPUTS_FUNCTIONS_H
#define INPUTS_FUNCTIONS_H
#include "get_retry_input.c"
#include "get_input.c"

extern void remove_input_spaces(char* input);
extern char* get_input(void);
extern char* get_lowercase_input(char* input);
extern int get_retry_input(void);

#endif
