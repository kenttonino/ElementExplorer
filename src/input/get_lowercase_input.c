#include <ctype.h>
#include <string.h>
#include "remove_input_spaces.c"

char *get_lowercase_input(char *input) {
  // * Cleanup the input first.
  remove_input_spaces(input);

  int input_length = strlen(input);

  // * Convert to lowercase.
  for (int i = 0; i < input_length; i++) {
    input[i] = tolower(input[i]);
  }

  return input;
}
