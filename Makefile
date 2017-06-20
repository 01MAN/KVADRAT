all: main

.RHONY: all clean test

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

build/src/functions.o: src/functions.c src/functions.h
	gcc -Wall -Werror -c src/functions.c -o build/src/functions.o -lm

build/test/x_test.o: test/x_test.c thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/x_test.c -o build/test/x_test.o

build/test/discriminant_test.o: test/discriminant_test.c thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/discriminant_test.c -o build/test/discriminant_test.o

main: deletedir makedir build/test/x_test.o build/test/discriminant_test.o
	gcc build/src/functions.o build/test/x_test.o build/test/discriminant_test.o -o bin/qa-test -lm

clean: rm -rf build/src/*.o build/test/*.o bin/* bin/*.*
