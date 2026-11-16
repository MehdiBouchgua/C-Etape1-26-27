Test3:	Test3.cpp Time.o Timing.o Event.o
	g++ -Wall Test3.cpp Time.o Timing.o Event.o -o Test3

Time.o:	Time.cpp Time.h
	g++ -Wall -c Time.cpp

Timing.o:	Timing.cpp Timing.h Time.h
	g++ -Wall -c Timing.cpp

Event.o:	Event.cpp Event.h Timing.h Time.h
	g++ -Wall -c Event.cpp

clean:
	rm -f *.o Test3
