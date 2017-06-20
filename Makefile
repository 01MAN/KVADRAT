all: main

.PHONY: all clean test

makedir:
	mkdir bin
	mkdir build
	mkdir build/src
	mkdir build/test

deletedir:
	rm -rf build/test
	rm -rf build/src
	rm -rf build
	rm -rf bin

main: deletedir makedir
	gcc -o src/functions.c test/x_test.c test/discriminant_test.c bin/qa-test

clean: rm -rf build/src/*.o build/test/*.o bin/* bin/*.*
