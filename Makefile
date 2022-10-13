all:
	mkdir -p build 
	g++ cpp-program.cpp -o build/cpp-program
run: 
	mkdir -p build 
	g++ cpp-program.cpp -o build/cpp-program
	./build/cpp-program
clean:
	rm -rf build