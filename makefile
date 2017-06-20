.PHONY: all clean makedir test

all: main

clean:
	rm -rf build/src/*
	rm -rf build/test/*

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
#сборка приложения
build/src/main.o: src/main.c
	gcc -Wall -Werror -c -o build/src/main.o src/main.c -lm

build/src/depcalc.o: src/depcalc.c
	gcc -Wall -Werror -c -o build/src/depcalc.o src/depcalc.c -lm

main: deletedir makedir build/src/main.o build/src/depcalc.o
	gcc -Wall -Werror -o bin/depcalc build/src/main.o build/src/depcalc.o -lm

#сборка теста
build/test/main.o: test/main.c
	gcc -Wall -Werror -c -o build/test/main.o test/main.c -lm

build/test/validation_test.o: test/validation_test.c
	gcc -Wall -Werror -c -o build/test/validation_test.o test/validation_test.c -lm

build/test/deposit_test.o: test/deposit_test.c
	gcc -Wall -Werror -c -o build/test/deposit_test.o test/deposit_test.c -lm

test: deletedir makedir build/test/main.o build/test/validation_test.o build/test/deposit_test.o build/src/depcalc.o
	gcc -Wall -Werror -o bin/test build/test/main.o build/test/validation_test.o build/test/deposit_test.o build/src/depcalc.o -lm
