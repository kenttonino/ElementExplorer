run-build:
	gcc -g -o bin/elementexplorer src/main.c

run-debug:
	make build
	gdb bin/elementexplorer

run:
	make build
	bin/elementexplorer
