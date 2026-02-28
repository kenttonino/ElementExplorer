#include "./get_input_tests.c"
#include "../../helper/helper.h"

int main(void) {
  clear_terminal();
  add_new_line(2);

  // Function tests.
  get_input_tests();
  add_new_line(2);

  return 0;
}
