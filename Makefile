all: clean install develop validate execute

clean:
	rm -rf build/*

install:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graph.png 

develop:
	cd build && cmake --build .

validate:
	cd build/tests && ./unit_tests

execute:
	cd build/app && ./Executable 

conan_debug:
	rm -rf build/*
	cd build && conan install .. -s build_type=Debug -s compiler.cppstd=17 --output-folder=. --build missing

conan_release:
	rm -rf build/*
	cd build && conan install .. -s build_type=Release -s compiler.cppstd=17 --output-folder=. --build missing

