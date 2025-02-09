run-build:
	gcc -g -o bin/elementexplorer src/main.c

run-debug:
	make run-build
	gdb bin/elementexplorer

run:
	make run-build
	bin/elementexplorer
