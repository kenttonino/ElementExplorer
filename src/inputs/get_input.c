#include "../escape_sequence/escape_sequence_function.h"
#include <stdlib.h>

char *get_input(void) {
  // Allocate memory to draftInput pointer.
  char *draftInput = malloc(sizeof(char) * 100);

  add_new_tab();
  add_new_tab();
  printf("Enter Element (Symbol | Name): ");
  fgets(draftInput, 100, stdin);

  return draftInput;
}
