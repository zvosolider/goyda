bin/goyda: src/main.cpp
	mkdir -p bin 
	g++ src/main.cpp -o bin/goyda

install: bin/goyda
	sudo cp bin/goyda /usr/local/bin

uninstall:
	sudo rm -f /usr/local/bin/goyda