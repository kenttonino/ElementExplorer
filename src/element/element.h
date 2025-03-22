#ifndef ELEMENT_H
#define ELEMENT_H
#include "./element_input_match.c"
#include "./get_element_details.c"

extern int element_input_match(char *input, char*symbol, char*name);
extern void get_element_details(element_details *element);

#endif
