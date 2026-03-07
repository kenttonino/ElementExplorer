#include "../../utils/utils.h"
#include "test_element_array.c"

int main(void) {
  clear_terminal();
  add_new_line(2);

  // Put all the tests here.
  test_element_array();
  add_new_line(2);

  return 0;
}
