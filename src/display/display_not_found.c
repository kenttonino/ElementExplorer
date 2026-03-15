#include "../utils/utils.h"

void display_not_found(void) {
  add_new_tab(2);
  printf("%sERROR: Element not found.%s", RED, RESET);
}
