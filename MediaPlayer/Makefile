objects = main.o View.o Control.o MediaTube.o Channel.o Media.o MediaPlayer.o MediaFactory.o Search.o
testobjects = test.o View.o TestControl.o Tester.o MediaTube.o Channel.o Media.o MediaPlayer.o MediaFactory.o Search.o

all: play

play: $(objects)
	g++ -o play $(objects)

main.o: main.cc Array.h
	g++ -c main.cc 

View.o: View.h View.cc Array.h
	g++ -c View.cc

Control.o: Control.h Control.cc Array.h
	g++ -c Control.cc

MediaTube.o: MediaTube.h MediaTube.cc Array.h
	g++ -c MediaTube.cc

Channel.o: Channel.cc Channel.h Array.h
	g++ -c Channel.cc

Media.o: Media.cc Media.h
	g++ -c Media.cc
	
MediaPlayer.o: MediaPlayer.cc MediaPlayer.h
	g++ -c MediaPlayer.cc
	
MediaFactory.o: MediaFactory.cc MediaFactory.h
	g++ -c MediaFactory.cc

Search.o: Search.cc Search.h
	g++ -c Search.cc

clean:
	rm -f play *.o	