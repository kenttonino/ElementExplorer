#include <assert.h>
#include "../../utils/utils.h"
#include "../element_array.c"

void test_element_array(void) {
  add_new_tab(2);
  printf("[ Testing element_array Function ]");
  add_new_line(1);

  // Get the length of the elements.
  int elements_size = sizeof(elements) / sizeof(element);

  // Element size equal to 118.
  add_new_tab(2);
  printf("%selement_array -> should return 1 if total elements is equal 118%s", GREEN, RESET);
  assert((elements_size == 118) == 1);
  add_new_line(1);

  // Element size not equal to 118.
  add_new_tab(2);
  printf("%selement_array -> should return 0 if total elements is not equal 118%s", GREEN, RESET);
  assert((elements_size == 100) == 0);
}
