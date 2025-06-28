# Compile the computer program with GCC with debug flag.
build:
	gcc -g -Wfatal-errors -Wpedantic -Wall -Wextra -Werror -o bin/elementexplorer src/main.c

# Run the executable binary using GDB.
debug:
	make build
	gdb bin/elementexplorer

# Run the executable binary.
run:
	make build
	bin/elementexplorer
