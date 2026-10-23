Test2:	Test2.cpp Time.o Timing.o Event.o
	g++ -Wall Test2.cpp Time.o Timing.o Event.o -o Test2

Time.o:	Time.cpp Time.h
	g++ -Wall -c Time.cpp

Timing.o:	Timing.cpp Timing.h Time.h
	g++ -Wall -c Timing.cpp

Event.o:	Event.cpp Event.h
	g++ -Wall -c Event.cpp

clean:
	rm -f *.o Test2
