#include "../helper/helper.h"
#include <stdlib.h>
#include <string.h>
#include "get_lowercase_input.c"

int get_retry_input(void) {
  char *retry_input = malloc(sizeof(char) * 5);

  add_new_tab();
  add_new_tab();
  printf("Try again (y | n): ");
  fgets(retry_input, 5, stdin);

  char *clean_input = get_lowercase_input(retry_input);

  if (strcmp(clean_input, "y") == 0 || strcmp(clean_input, "yes") == 0) {
    return 1;
  } else {
    return 0;
  }
}
