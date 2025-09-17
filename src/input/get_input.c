#include "../helper/helper.h"
#include <stdlib.h>

char *get_input(void) {
  // * Allocate memory to draftInput pointer.
  char *draft_input = malloc(sizeof(char) * 100);

  add_new_tab(2);
  printf("Enter Element (Symbol | Name): ");
  fgets(draft_input, 100, stdin);

  return draft_input;
}
