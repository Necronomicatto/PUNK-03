main: main.o Entry.o Errors.o Process.o Exit.o
	cc -Wall main.o Entry.o Errors.o Process.o Exit.o -o main	
main.o: main.c
	cc -c -Wall main.c

Entry.o: Entry.c Entry.h
	cc -c -Wall Entry.c

Errors.o: Errors.c Errors.h
	cc -c -Wall Errors.c

Process.o: Process.c Process.h
	cc -c -Wall Process.c

Exit.o: Exit.c Exit.h
	cc -c -Wall Exit.c

clean:
	rm Entry.o Errors.o Process.o Exit.o main.o