#include "../../utils/utils.h"
#include "element_test.h"

int main(void) {
  clear_terminal();
  add_new_line(2);

  // Put all the tests here.
  test_element_array();
  add_new_line(2);
  test_element_input_match();
  add_new_line(2);

  return 0;
}
