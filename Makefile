all: genMino.o main.cpp Mino.o MinoS.o Minol.o MinoT.o MinoL.o MinoLL.o MinoSS.o
	g++ -o main genMino.o Mino.o MinoS.o Minol.o MinoT.o MinoL.o MinoLL.o MinoSS.o main.cpp

genMino.o: genMino.cpp genMino.h
	g++ -c genMino.cpp

Mino.o: Mino.h Mino.cpp
	g++ -c Mino.cpp

MinoS.o: MinoS.cpp MinoS.h
	g++ -c MinoS.cpp

Minol.o: Minol.cpp Minol.h
	g++ -c Minol.cpp

MinoT.o: MinoT.cpp MinoT.h
	g++ -c MinoT.cpp -o MinoT.o

MinoL.o: MinoL.cpp MinoL.h
	g++ -c MinoL.cpp -o MinoL.o

MinoLL.o: MinoLL.cpp MinoLL.h
	g++ -c MinoLL.cpp -o MinoLL.o

MinoSS.o: MinoSS.cpp MinoSS.h
	g++ -c MinoSS.cpp -o MinoSS.o

clean:
	rm *.o main
