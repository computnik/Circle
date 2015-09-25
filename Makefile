CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Lesson.o

LIBS =

TARGET =	Lesson.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
