#include "../escape_sequence/escape_sequence_function.h"

void element_not_found(void) {
  add_new_tab();
  add_new_tab();
  printf("%sERROR: Element not found.%s", RED, RESET);
}
