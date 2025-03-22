#include "../helper/helper.h"

void display_not_found(void) {
  add_new_tab();
  add_new_tab();
  printf("%sERROR: Element not found.%s", RED, RESET);
}
