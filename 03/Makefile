OBJS = main.o driver.o amphibi.o air_animal.o air_habitat.o animal.o cage.o cell.o entrance.o exit.o facility.o habitat.o herbivora.o karnivora.o land_animal.o land_habitat.o omnivora.o park.o point.o renderable.o restaurant.o road.o water_animal.o water_habitat.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

main: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main -std=c++11

main.o: main.cpp driver.h air_animal.h air_habitat.h cell.h facility.h habitat.h road.h animal.h land_animal.h land_habitat.h amphibi.h entrance.h exit.h cage.h herbivora.h karnivora.h omnivora.h park.h point.h renderable.h restaurant.h water_animal.h water_habitat.h
	$(CC) $(CFLAGS) main.cpp -std=c++11

driver.o: driver.cpp driver.h air_animal.h air_habitat.h cell.h facility.h habitat.h road.h animal.h land_animal.h land_habitat.h amphibi.h entrance.h exit.h cage.h herbivora.h karnivora.h omnivora.h park.h point.h renderable.h restaurant.h water_animal.h water_habitat.h
	$(CC) $(CFLAGS) driver.cpp -std=c++11

amphibi.o : amphibi.cpp amphibi.h animal.h herbivora.h karnivora.h omnivora.h land_animal.h water_animal.h
	$(CC) $(CFLAGS) amphibi.cpp -std=c++11

air_animal.o: air_animal.cpp air_animal.h animal.h herbivora.h karnivora.h omnivora.h
	$(CC) $(CFLAGS) air_animal.cpp -std=c++11

air_habitat.o: air_habitat.cpp air_habitat.h habitat.h
	$(CC) $(CFLAGS) air_habitat.cpp -std=c++11

animal.o: animal.cpp animal.h
	$(CC) $(CFLAGS) animal.cpp -std=c++11

cage.o: cage.cpp cage.h animal.h point.h habitat.h
	$(CC) $(CFLAGS) cage.cpp -std=c++11

cell.o: cell.cpp cell.h point.h entrance.h exit.h cage.h renderable.h
	$(CC) $(CFLAGS) cell.cpp -std=c++11

entrance.o: entrance.cpp entrance.h road.h
	$(CC) $(CFLAGS) entrance.cpp -std=c++11

exit.o: exit.cpp exit.h road.h
	$(CC) $(CFLAGS) exit.cpp -std=c++11

facility.o: facility.cpp facility.h point.h
	$(CC) $(CFLAGS) facility.cpp -std=c++11

habitat.o: habitat.cpp habitat.h point.h
	$(CC) $(CFLAGS) habitat.cpp -std=c++11

herbivora.o: herbivora.cpp herbivora.h animal.h
	$(CC) $(CFLAGS) herbivora.cpp -std=c++11

karnivora.o: karnivora.cpp karnivora.h animal.h
	$(CC) $(CFLAGS) karnivora.cpp -std=c++11

land_animal.o: land_animal.cpp land_animal.h animal.h
	$(CC) $(CFLAGS) land_animal.cpp -std=c++11

land_habitat.o: land_habitat.cpp land_habitat.h habitat.h
	$(CC) $(CFLAGS) land_habitat.cpp -std=c++11

omnivora.o: omnivora.cpp omnivora.h animal.h
	$(CC) $(CFLAGS) omnivora.cpp -std=c++11

park.o: park.cpp park.h facility.h
	$(CC) $(CFLAGS) park.cpp -std=c++11

point.o: point.cpp point.h renderable.h
	$(CC) $(CFLAGS) point.cpp -std=c++11

renderable.o: renderable.cpp renderable.h
	$(CC) $(CFLAGS) renderable.cpp -std=c++11

restaurant.o: restaurant.cpp restaurant.h facility.h
	$(CC) $(CFLAGS) restaurant.cpp -std=c++11

road.o: road.cpp road.h facility.h
	$(CC) $(CFLAGS) road.cpp -std=c++11

water_animal.o: water_animal.cpp water_animal.h animal.h karnivora.h omnivora.h herbivora.h
	$(CC) $(CFLAGS) water_animal.cpp -std=c++11

water_habitat.o: water_habitat.cpp water_habitat.h habitat.h
	$(CC) $(CFLAGS) water_habitat.cpp -std=c++11

clean:
	\rm *.o *~main
