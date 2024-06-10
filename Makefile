nes: src/cpu.h src/cpu.cc src/main.cc
	mkdir -p build
	g++ -Wall -Werror src/cpu.cc src/main.cc -o build/nes

.PHONY:
format:
	clang-format -i src/*.h src/*.cc

.PHONY:
clean:
	rm -fr build/
