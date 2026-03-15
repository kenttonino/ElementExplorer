#include <stdio.h>
#include "../element_input_match.c"
#include "../../utils/utils.h"

void test_element_input_match(void) {
  add_new_tab(2);
  printf("[ Testing element_input_match Function ]");
  add_new_line(1);

  element hydrogen = elements[0];
  char input_correct[] = "hydrogen";
  char input_incorrect[] = "hygendro";

  // Correct input.
  add_new_tab(2);
  printf("%selement_input_match -> should return 1 if input match with element name or symbol%s", GREEN, RESET);
  assert((element_input_match(input_correct, hydrogen.symbol, hydrogen.name)) == 1);
  add_new_line(1);

  // Incorrect input.
  add_new_tab(2);
  printf("%selement_input_match -> should return 0 if input mismatch with element name or symbol%s", GREEN, RESET);
  assert((element_input_match(input_incorrect, hydrogen.symbol, hydrogen.name)) == 0);
}
