#include <stdio.h>

void add_new_tab(int num_lines) {
  for (int i = 0; i < num_lines; i++) {
    printf("\t");
  }
}
