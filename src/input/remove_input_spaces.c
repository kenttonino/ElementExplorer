void remove_input_spaces(char *input) {
  // To keep track of non-space character count
  int count = 0;

  for (int i = 0; input[i]; i++) {
    if (input[i] != ' ') {
      input[count++] = input[i];
    }
  }

  input[count - 1] = '\0';
}
