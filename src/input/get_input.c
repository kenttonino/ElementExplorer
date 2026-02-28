#include "../helper/helper.h"

char *get_input(void) {
  // Allocate 1000 bytes to draft_input.
  static char draft_input[1000];

  add_new_tab(2);
  printf("Enter Element (Symbol | Name): ");
  fgets(draft_input, sizeof(draft_input), stdin);

  return draft_input;
}
