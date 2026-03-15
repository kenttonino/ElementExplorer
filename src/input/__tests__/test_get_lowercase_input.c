#include <stdio.h>
#include <assert.h>
#include "../get_lowercase_input.c"
#include "../../utils/utils.h"
#include "string.h"

void test_get_lowercase_input(void) {
  add_new_tab(2);
  printf("[ Testing get_lowercase_input Functions ]");
  add_new_line(1);

  // Prepare the input.
  // Add newline, need to assume this is from stdin.
  char input_without_space[] = "OXYGEN\n";
  char input_with_space[] = " OXY GEN \n";

  // Convert the input to lowercase.
  char *input_lowercase_without_space = get_lowercase_input(input_without_space);
  char *input_lowercase_with_space = get_lowercase_input(input_with_space);

  // Input without spaces.
  add_new_tab(2);
  printf("%sget_lowercase_input -> should return correct lowercase input without space%s", GREEN, RESET);
  assert(strcmp(input_lowercase_with_space, "oxygen") == 0);
  add_new_line(1);

  // Input with spaces.
  add_new_tab(2);
  printf("%sget_lowercase_input -> should return correct lowercase input even with space%s", GREEN, RESET);
  assert(strcmp(input_lowercase_without_space, "oxygen") == 0);
}
