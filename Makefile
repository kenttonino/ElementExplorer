# Compile the computer program with GCC with debug flag.
build:
	gcc -g -Wfatal-errors -Wpedantic -Wall -Wextra -Werror -o bin/elementexplorer src/main.c

build-tests:
	gcc -g -Wfatal-errors -Wpedantic -Wall -Wextra -Werror -o ./bin/__tests__/input_tests ./src/input/__tests__/input_tests.c

# Run the unit tests.
run-tests: build-tests
	./bin/__tests__/input_tests

# Run the valgrind dynamic analysis tool.
run-valgrind: build
	valgrind --leak-check=full --leak-resolution=high ./bin/elementexplorer

# Run the executable binary using GDB.
run-debug: build
	gdb bin/elementexplorer

# Run the executable binary.
run: build
	bin/elementexplorer
