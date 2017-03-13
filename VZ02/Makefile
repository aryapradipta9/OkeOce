OBJS = main.o road.o land_habitat.o water_habitat.o air_habitat.o africanelephant.o anoa.o bear.o eagle.o girrafe.o gorilla.o indianphyton.o lion.o merak.o panda.o pari.o penguin.o reindeer.o seadragon.o rhino.o squirrelmonkey.o tiger.o whale.o whiteshark.o zebra.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

main: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o: main.cpp africanelephant.h air_habitat.h anoa.h bear.h eagle.h girrafe.h gorilla.h indianphyton.h land_habitat.h lion.h merak.h panda.h pari.h penguin.h reindeer.h rhino.h road.h seadragon.h squirrelmonkey.h tiger.h water_habitat.h whale.h whiteshark.h zebra.h
	$(CC) $(CFLAGS) main.cpp
africanelephant.o: africanelephant.cpp africanelephant.h
	$(CC) $(CFLAGS) africanelephant.cpp

anoa.o: anoa.cpp anoa.h
	$(CC) $(CFLAGS) anoa.cpp

bear.o: bear.cpp bear.h
	$(CC) $(CFLAGS) bear.cpp

eagle.o: eagle.cpp eagle.h
	$(CC) $(CFLAGS) eagle.cpp

girrafe.o: girrafe.cpp girrafe.h
	$(CC) $(CFLAGS) girrafe.cpp

gorilla.o: gorilla.cpp gorilla.h
	$(CC) $(CFLAGS) gorilla.cpp

indianphyton.o: indianphyton.cpp indianphyton.h
	$(CC) $(CFLAGS) indianphyton.cpp

lion.o: lion.cpp lion.h
	$(CC) $(CFLAGS) lion.cpp

merak.o: merak.cpp merak.h
	$(CC) $(CFLAGS) merak.cpp

panda.o: panda.cpp panda.h
	$(CC) $(CFLAGS) panda.cpp

pari.o: pari.cpp pari.h
	$(CC) $(CFLAGS) pari.cpp

penguin.o: penguin.cpp penguin.h
	$(CC) $(CFLAGS) penguin.cpp

reindeer.o: reindeer.cpp reindeer.h
	$(CC) $(CFLAGS) reindeer.cpp

rhino.o: rhino.cpp rhino.h
	$(CC) $(CFLAGS) rhino.cpp

land_habitat.o: land_habitat.cpp land_habitat.h
	$(CC) $(CFLAGS) land_habitat.cpp


air_habitat.o: air_habitat.cpp air_habitat.h
	$(CC) $(CFLAGS) air_habitat.cpp

water_habitat.o: water_habitat.cpp water_habitat.h
	$(CC) $(CFLAGS) water_habitat.cpp

road.o: road.cpp road.h
	$(CC) $(CFLAGS) road.cpp

seadragon.o: seadragon.cpp seadragon.h
	$(CC) $(CFLAGS) seadragon.cpp

squirrelmonkey.o: squirrelmonkey.cpp squirrelmonkey.h
	$(CC) $(CFLAGS) squirrelmonkey.cpp

tiger.o: tiger.cpp tiger.h
	$(CC) $(CFLAGS) tiger.cpp

whale.o: whale.cpp whale.h
	$(CC) $(CFLAGS) whale.cpp

whiteshark.o: whiteshark.cpp whiteshark.h
	$(CC) $(CFLAGS) whiteshark.cpp

zebra.o: zebra.cpp zebra.h
	$(CC) $(CFLAGS) zebra.cpp

clean:
	\rm *.o *~main
