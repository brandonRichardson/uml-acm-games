# This Makefile was stolen from mulhern's Computing II
# class website! For this reason, it's not necessarily
# ideal for our purposes. Anyone willing to cut some of
# the fat off of it would be greatly appreciated.


SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

CC := g++
FLAGS := -g
CFLAGS := $(FLAGS) -save-temps 
HFLAGS := $(FLAGS)

EXECUTABLE := main
DEPEND := .depend
SUBMIT := submit

$(EXECUTABLE): $(OBJECTS)


$(DEPEND):
	$(CC) $(CFLAGS) -MM *.cpp > $@

-include $(DEPEND)

clean:
	-rm *.h.gch *.s *.i *.o
	-rm  $(SUBMIT).tar $(SUBMIT).tar.gz $(DEPEND) $(EXECUTABLE) 

headers:
	$(CC) $(HFLAGS) *.h
	-rm *.h.gch

cppcheck:
	-cppcheck *.cpp *.h

$(SUBMIT).tar:
	tar cvf $@ --exclude *.*~ *

$(SUBMIT).tar.gz: submit.tar
	gzip $<

.PHONY: clean headers
