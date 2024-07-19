all: clean install develop execute

clean:
	rm -rf build/*

install:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graph.png 

develop:
	cd build && cmake --build .

execute:
	cd build/app && ./Executable 
