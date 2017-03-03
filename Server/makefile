CXX=g++ 
EXEC=mp3Server
LDFLAGS=-lIce -lIceUtil -lpthread
INTNAME=Mp3Player

all: $(EXEC) $(EXECJ)

$(EXEC): $(INTNAME).o Server.o
	$(CXX) -o $(EXEC) $(INTNAME).o Server.o $(LDFLAGS)

$(INTNAME).o: $(INTNAME).ice
	slice2cpp $(INTNAME).ice
	$(CXX) -I. -c $(INTNAME).cpp 

Server.o: Server.cpp Server.h
	$(CXX) -I. -c Server.cpp 

clean:
	rm -rf *.o
	rm $(INTNAME).cpp
	rm $(INTNAME).h
run:
	./$(EXEC)
mrproper: clean
	rm -rf $(EXEC)
