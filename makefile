compile: main.c 
	 gcc main.c -o nopparuj

run: nopparuj
	 ./nopparuj

clean: nopparuj
	 rm nopparuj