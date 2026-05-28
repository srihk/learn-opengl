CXX = g++
CFLAGS = -c -I ThirdParty/include -I include
LDFLAGS = -L ThirdParty/lib -lglfw

all: bin/triangle

# Linking Rule
bin/%: obj/%.o obj/glad.o
	$(CXX) -o $@ $< obj/glad.o $(LDFLAGS)

bin:
	mkdir -p bin

obj:
	mkdir -p obj

# Compilation Rules
obj/%.o: triangle/src/%.cpp | obj
	$(CXX) -c $(CFLAGS) -o $@ $<

obj/glad.o: ThirdParty/src/glad.c | obj
	gcc $(CFLAGS) ThirdParty/src/glad.c -o obj/glad.o

clean:
	rm -rf bin/* obj/*

.PHONY: all clean
