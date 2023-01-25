main: main.o entry.o errors.o process.o exit.o
	cc -Wall main.o entry.o errors.o process.o exit.o -o main	

main.0: main.c
	cc -c -Wall main.c

entry.o: Entry.c Entry.h
	cc -c -Wall entry.c

errors.o: Errors.c Errors.h
	cc -c -Wall Errors.c

process.o: Process.c Process.h
	cc -c -Wall Process.c

exit.o: Exit.c Exit.h
	cc -c -Wall exit.c

clean:
	rm main main.o entry.o errors.o process.o exit.o