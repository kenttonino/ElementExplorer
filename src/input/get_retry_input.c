#include "../helper/helper.h"
#include "get_lowercase_input.c"
#include <stdlib.h>
#include <string.h>

int get_retry_input(void) {
  char *retry_input = malloc(sizeof(char) * 5);

  add_new_tab(2);
  printf("Try again (y | n): ");
  fgets(retry_input, 5, stdin);

  // Strip newline if present.
  retry_input[strcspn(retry_input, "\n")] = 0;

  // Clean the input and make sure it is all lowercase.
  char *clean_input = get_lowercase_input(retry_input);

  // Compare the input if yes or no.
  int result = (strcmp(clean_input, "y") == 0 || strcmp(clean_input, "yes") == 0);

  // Free the allocated memory.
  free(retry_input);

  return result;
}
