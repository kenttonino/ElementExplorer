# Compile the computer program with GCC with debug flag.
build:
	gcc -g -Wfatal-errors -Wpedantic -Wall -Wextra -Werror -o bin/elementexplorer src/main.c

# Run the valgrind dynamic analysis tool.
run-valgrind: build
	valgrind --leak-check=full --leak-resolution=high ./bin/elementexplorer

# Run the executable binary using GDB.
run-debug: build
	gdb bin/elementexplorer

# Run the executable binary.
run: build
	bin/elementexplorer
