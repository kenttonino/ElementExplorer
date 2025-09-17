#include "../helper/helper.h"

void display_description(void) {
  add_new_tab(2);
  printf("%s------------------------------------------------%s", BLUE, RESET);
  add_new_line(2);
  add_new_tab(4);
  printf("%sElementExplorer%s", GREEN, RESET);
  add_new_line(2);
  add_new_tab(3);
  printf("A CLI tool for Element details.");
  add_new_line(2);
  add_new_tab(2);
  printf("%s------------------------------------------------%s\n", BLUE, RESET);
}
