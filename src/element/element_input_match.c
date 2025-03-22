#include <string.h>

int element_input_match(char *input, char *symbol, char *name) {

  int is_symbol_match = strcmp(input, symbol);
  int is_name_match = strcmp(input, name);

  if (is_symbol_match == 0 || is_name_match == 0) {
    return 1;
  } else {
    return 0;
  }
}
