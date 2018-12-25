# Makefile
# oberoi, sean
# ssoberoi

project01: Graph.o Project.o
	rm -rf chart
	g++ Graph.o Project.o -o ./chart
	make clean

clean:
	@rm -f $(PROGRAMS) *.o core