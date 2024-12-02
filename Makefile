CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(CPP_FILES:.cpp=.o)
TARGET := revercpp

$(TARGET): $(OBJ_FILES)
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $< -o $@
