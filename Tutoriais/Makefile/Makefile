EXEC = gcc
CFLAGS = -std=c99 -fstack-protector-all -g

executavel_t1: main.o arquivo1.o arquivo2.o arquivo3.o
	$(EXEC) $(CFLAGS) main.o arquivo1.o arquivo2.o arquivo3.o -o executavel_t1

arquivo1.o: arquivo1.c header1.h
	$(EXEC) $(CFLAGS) -c arquivo1.c

arquivo2.o: arquivo2.c header2.h
	$(EXEC) $(CFLAGS) -c arquivo2.c

arquivo3.o: arquivo3.c header3.h
	$(EXEC) $(CFLAGS) -c arquivo3.c

main.o: main.c header1.h header2.h header3.h libs.h
	$(EXEC) $(CFLAGS) -c main.c