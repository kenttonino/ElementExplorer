#include "display/display.h"
#include "element/element.h"
#include "element/element_data.h"
#include "element/element_type.h"
#include "helper/helper.h"
#include "input/input.h"

int main(void) {
  int try_again = 1;
  char *input;
  char *lowercase_input;
  int no_match = 1;

  while (try_again == 1) {
    // * Clean up the screen.
    clear_terminal();
    add_new_line(3);

    // * Show the name of the tool and include some description.
    display_description();

    // * Handle the input.
    add_new_line(1);
    input = get_input();
    lowercase_input = get_lowercase_input(input);
    add_new_line(1);

    // * Display correct details.
    for (long unsigned int i = 0; i < (sizeof(elements) / sizeof(element));
         i++) {
      element current_element = elements[i];
      char *current_symbol = current_element.symbol;
      char *current_name = current_element.name;

      if (element_input_match(lowercase_input, current_symbol, current_name)) {
        get_element_details(current_element.element_details);
        no_match = 0;
        break;
      }
    }

    if (no_match) {
      display_not_found();
    }

    // * Ask user if want to try again.
    add_new_line(2);
    try_again = get_retry_input();
    no_match = 1;
  }

  // * Add some spaces before the exit.
  add_new_line(1);
  display_exit();
  add_new_line(2);

  return 0;
}
