program: main.c
	gcc main.c -o insertion

.PHONY: clean

clean: 
	rm insertion
