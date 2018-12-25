# Makefile
# oberoi, sean
# ssoberoi

project01: Graph.o Project.o
	rm -rf build
	mkdir build
	g++ Graph.o Project.o -o ./build/p01
	make clean

clean:
	@rm -f $(PROGRAMS) *.o core