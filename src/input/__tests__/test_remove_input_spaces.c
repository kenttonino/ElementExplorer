#include "../../utils/utils.h"
#include <assert.h>
#include <string.h>

void test_remove_input_spaces(void) {
  add_new_tab(2);
  printf("[ Testing remove_input_spaces Function ]");
  add_new_line(1);

  // Prepare the input.
  // Add newline, need to assume this is from stdin.
  char input_with_space[] = " OXY GEN \n";

  // Convert the input to lowercase.
  remove_input_spaces(input_with_space);

  add_new_tab(2);
  printf("%sremove_input_spaces -> should return correct input without space%s", GREEN, RESET);
  assert(strcmp(input_with_space, "OXYGEN") == 0);
}
