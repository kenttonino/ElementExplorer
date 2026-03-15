#include "./test_get_lowercase_input.c"
#include "../../utils/utils.h"
#include "./test_remove_input_spaces.c"

int main(void) {
  clear_terminal();
  add_new_line(2);

  // Function tests.
  test_get_lowercase_input();
  add_new_line(2);
  test_remove_input_spaces();
  add_new_line(2);

  return 0;
}
