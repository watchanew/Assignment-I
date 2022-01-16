compile: main.c 
	 gcc main.c -o New

run: New
	 ./New

clean: New
	 rm New