#include "./test_get_lowercase_input.c"
#include "../../utils/utils.h"

int main(void) {
  clear_terminal();
  add_new_line(2);

  // Function tests.
  test_get_lowercase_input();
  add_new_line(2);

  return 0;
}
