# Compile the computer program with GCC with debug flag.
build:
	gcc -g -Wfatal-errors -Wpedantic -Wall -Wextra -Werror -o bin/elementexplorer src/main.c

build-test:
	gcc -g -Wfatal-errors -Wpedantic -Wall -Wextra -Werror -o ./bin/__tests__/input_test ./src/input/__tests__/input_test.c
	gcc -g -Wfatal-errors -Wpedantic -Wall -Wextra -Werror -o ./bin/__tests__/element_test ./src/element/__tests__/element_test.c

# Run the unit tests.
run-test: build-test
	# E.g. make run-test bin="input_test"
	./bin/__tests__/${bin}

run-test-debug: build-test
	# E.g. make run-test-debug bin="./bin/__tests__/input_test"
	gdb ${bin}

# Run the valgrind dynamic analysis tool.
run-valgrind: build
	valgrind --leak-check=full --leak-resolution=high ./bin/elementexplorer

# Run the executable binary using GDB.
run-debug: build
	gdb bin/elementexplorer

# Run the executable binary.
run: build
	bin/elementexplorer
